#ifndef _VECTOR_H_
#define _VECTOR_H_

#include "smVector2.h"
#include "smVector3.h"

	//vector-specific functions.
//vector conversions (2->3, 3->2)

//dot products
//**when comparing 2D and 3D vectors, assumes the z of the 2D vector is 0.
float Dot(const smVector2 &_v1, const smVector2 &_v2);
float Dot(const smVector3 &_v1, const smVector3 &_v2);
float Dot(const smVector2 &_v1, const smVector3 &_v2);
float Dot(const smVector3 &_v1, const smVector2 &_v2);

//cross products
smVector3 Cross(const smVector3 &_v1, const smVector3 &_v2);

//angles
//**when comparing 2D and 3D vectors, assumes the z of the 2D vector is 0.
float AngleBetweenVectors(smVector2 &_v1, smVector2 &_v2);
float AngleBetweenVectors(smVector3 &_v1, smVector3 &_v2);
float AngleBetweenVectors(smVector2 &_v1, smVector3 &_v2);
float AngleBetweenVectors(smVector3 &_v1, smVector2 &_v2);

#endif