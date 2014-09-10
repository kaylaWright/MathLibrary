#include "smVector2.h"


#pragma region con/des
smVector2::smVector2(void) : x(0), y(0)
{   }

smVector2::smVector2(const float &_x, const float &_y) : x(_x), y(_y)
{   }

smVector2::smVector2(const smVector2 &_inVec) : x(_inVec.x), y(_inVec.y)
{   }

smVector2::~smVector2(void)
{   }
#pragma endregion

//vec2 manipulations (zeroing, mag, normalize)
#pragma region manips

//zeros out vector.
bool  smVector2::Zero()
{
	x = 0;
	y = 0;

	return true;
}

//magnitude
float  smVector2::Magnitude()
{
	return sqrtf((x*x) + (y*y));
}

//squared magnitude
float  smVector2::SqMagnitude()
{
	return ((x*x) + (y*y));
}

//normalized
smVector2  smVector2::Normalize()
{
	float tMag = this->Magnitude();

	this->x /= tMag;
	this->y /= tMag;

	return *this;
}

#pragma endregion

//operator overloading for the vec2 class.
#pragma region overloads

smVector2 smVector2::operator=(const smVector2 &_vec)
{   
	if(*this != _vec)
	{
		this->x = _vec.x;
		this->y = _vec.y;
	}

	return *this;
}

smVector2 smVector2::operator+(const smVector2 &_vec)
{   
	*this += _vec;

	return *this;
}
smVector2 smVector2::operator-(const smVector2 &_vec)
{   
	*this -= _vec;

	return *this;
}

smVector2 smVector2::operator+=(const smVector2 &_vec)
{   
	this->x += _vec.x;
	this->y += _vec.y;

	return *this;
}
smVector2 smVector2::operator-=(const smVector2 &_vec)
{  
	this->x -= _vec.x;
	this->y -= _vec.y;

	return *this;
}


//scalars
smVector2 smVector2::operator+(const float &_sca)
{
	*this += _sca;

	return *this;
}
smVector2 smVector2::operator-(const float &_sca)
{
	*this -= _sca;

	return *this;
}
smVector2 smVector2::operator*(const float &_sca)
{
	*this *= _sca;

	return *this;
}
smVector2 smVector2::operator/(const float &_sca)
{
	*this /= _sca;

	return *this;
}

smVector2 smVector2::operator+=(const float &_sca)
{
	this->x += _sca;
	this->y += _sca;

	return *this;
}
smVector2 smVector2::operator-=(const float &_sca)
{
	this->x -= _sca;
	this->y -= _sca;

	return *this;
}
smVector2 smVector2::operator*=(const float &_sca)
{
	this->x *= _sca;
	this->y *= _sca;

	return *this;
}
smVector2 smVector2::operator/=(const float &_sca)
{
	this->x /= _sca;
	this->y /= _sca;

	return *this;
}

bool smVector2::operator==(const smVector2 &_vec) const
{
	return ((this->x == _vec.x) && (this->y == _vec.y));
}
bool smVector2::operator!=(const smVector2 &_vec) const
{
	return !(*this == _vec);
}

#pragma endregion

#pragma region print
	
std::ostream& operator<<(std::ostream& out, const smVector2 &_v)
{
	out << "[" << _v.x << ", " << _v.y << "]";
	return out;
}

std::ostream& operator<<(std::ostream& out, const smVector2 *_v)
{
	out << "[" << _v->x << ", " << _v->y << "]";
	return out;
}
#pragma endregion