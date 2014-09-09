#include "smVector.h"

//dot products
//**when comparing 2D and 3D vectors, assumes the z of the 2D vector is 0.
float Dot(const smVector2 &_v1, const smVector2 &_v2)
{
	return ((_v1.x * _v2.x) + (_v1.y * _v2.y));
}
float Dot(const smVector3 &_v1, const smVector3 &_v2)
{
	return ((_v1.x * _v2.x) + (_v1.y * _v2.y) + (_v1.z * _v2.z));
}
float Dot(const smVector2 &_v1, const smVector3 &_v2)
{
	return ((_v1.x * _v2.x) + (_v1.y * _v2.y) + (0 * _v2.z));
}
float Dot(const smVector3 &_v1, const smVector2 &_v2)
{
	return ((_v1.x * _v2.x) + (_v1.y * _v2.y) + (_v1.z * 0));
}

//cross products
//**absolutely cannot be done with 2D vectors -> has analogs in matrix math.
smVector3 Cross(const smVector3 &_v1, const smVector3 &_v2)
{
	smVector3 cross;

	cross.x = (_v1.y * _v2.z) - (_v1.z * _v2.y);
	cross.y = (_v1.z * _v2.x) - (_v1.x * _v2.z);
	cross.z = (_v1.x * _v2.y) - (_v1.y * _v2.x);

	return cross;
}

//angles
//**when comparing 2D and 3D vectors, assumes the z of the 2D vector is 0. Because it is.
float AngleBetweenVectors(smVector2 &_v1, smVector2 &_v2)
{
	return acosf(Dot(_v1, _v2)/ (_v1.Magnitude() * _v2.Magnitude()));
}
float AngleBetweenVectors(smVector3 &_v1, smVector3 &_v2)
{
	return acosf(Dot(_v1, _v2)/ (_v1.Magnitude() * _v2.Magnitude()));
}
float AngleBetweenVectors(smVector2 &_v1, smVector3 &_v2)
{
	return acosf(Dot(_v1, _v2)/ (_v1.Magnitude() * _v2.Magnitude()));
}
float AngleBetweenVectors(smVector3 &_v1, smVector2 &_v2)
{
	return acosf(Dot(_v1, _v2)/ (_v1.Magnitude() * _v2.Magnitude()));
}