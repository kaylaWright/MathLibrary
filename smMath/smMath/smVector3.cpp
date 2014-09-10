#include "smVector3.h"

#pragma region con/des
smVector3::smVector3(void)
{   }

smVector3::smVector3(float _x, float _y, float _z) : x(_x), y(_y), z(_z)
{   }

smVector3::smVector3(const smVector3 &_inVec) : x(_inVec.x), y(_inVec.y), z(_inVec.z)
{   }

smVector3::~smVector3(void)
{   }
#pragma endregion

#pragma region manips

//zeros out vector.
bool  smVector3::Zero()
{
	x = 0;
	y = 0;
	z = 0;

	return true;
}

//magnitude
float  smVector3::Magnitude()
{
	return sqrtf((x*x) + (y*y) + (z*z));
}

//squared magnitude
float  smVector3::SqMagnitude()
{
	return ((x*x) + (y*y) + (z*z));
}

//normalized
smVector3  smVector3::Normalize()
{
	float tMag = this->Magnitude();

	this->x /= tMag;
	this->y /= tMag;
	this->z /= tMag;

	return *this;
}

#pragma endregion

#pragma region overloads

smVector3 smVector3::operator=(const smVector3 &_vec)
{   
	if(*this != _vec)
	{
		this->x = _vec.x;
		this->y = _vec.y;
		this->z = _vec.z;
	}

	return *this;
}

smVector3 smVector3::operator+(const smVector3 &_vec)
{   
	*this += _vec;

	return *this;
}
smVector3 smVector3::operator-(const smVector3 &_vec)
{   
	*this -= _vec;

	return *this;
}

smVector3 smVector3::operator+=(const smVector3 &_vec)
{   
	this->x += _vec.x;
	this->y += _vec.y;
	this->z += _vec.z;

	return *this;
}
smVector3 smVector3::operator-=(const smVector3 &_vec)
{  
	this->x -= _vec.x;
	this->y -= _vec.y;
	this->z -= _vec.z;

	return *this;
}


//scalars
smVector3 smVector3::operator+(const float &_sca)
{
	*this += _sca;

	return *this;
}
smVector3 smVector3::operator-(const float &_sca)
{
	*this -= _sca;

	return *this;
}
smVector3 smVector3::operator*(const float &_sca)
{
	*this *= _sca;

	return *this;
}
smVector3 smVector3::operator/(const float &_sca)
{
	*this /= _sca;

	return *this;
}

smVector3 smVector3::operator+=(const float &_sca)
{
	this->x += _sca;
	this->y += _sca;
	this->z += _sca;

	return *this;
}
smVector3 smVector3::operator-=(const float &_sca)
{
	this->x -= _sca;
	this->y -= _sca;
	this->z -= _sca;

	return *this;
}
smVector3 smVector3::operator*=(const float &_sca)
{
	this->x *= _sca;
	this->y *= _sca;
	this->z *= _sca;

	return *this;
}
smVector3 smVector3::operator/=(const float &_sca)
{
	this->x /= _sca;
	this->y /= _sca;
	this->z /= _sca;

	return *this;
}

bool smVector3::operator==(const smVector3 &_vec) const
{
	return ((this->x == _vec.x) && (this->y == _vec.y) && (this->z == _vec.z));
}
bool smVector3::operator!=(const smVector3 &_vec) const
{
	return !(*this == _vec);
}

#pragma endregion

#pragma region print
	
std::ostream& operator<<(std::ostream& out, const smVector3 &_v)
{
	out << "[" << _v.x << ", " << _v.y << ", " << _v.z << "]";
	return out;
}

std::ostream& operator<<(std::ostream& out, smVector3 *_v)
{
	out << "[" << _v->x << ", " << _v->y << ", " << _v->z << "]";
	return out;
}

#pragma endregion