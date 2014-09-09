#ifndef _VECTOR3_H_
#define _VECTOR3_H_

#include <math.h>
#include <iostream>

class smVector3
{
private:
protected:
public:
		//variables
	float x, y, z;

		//con/des
	smVector3(void);
	smVector3(float _x, float _y, float _z);
	smVector3(const smVector3 &_inVec);
	~smVector3(void);

		//manipulations.
	//zeroes out the vector.
	bool Zero();
	//magnitude
	float Magnitude();
	//squared magnitude
	float SqMagnitude();
	//normalized
	smVector3 Normalize();

		//operator overloads
	//vectors
	smVector3 operator=(const smVector3 &_vec);

	smVector3 operator+(const smVector3 &_vec);
	smVector3 operator-(const smVector3 &_vec);

	smVector3 operator+=(const smVector3 &_vec);
	smVector3 operator-=(const smVector3 &_vec);

	//scalars
	smVector3 operator+(const float &_sca);
	smVector3 operator-(const float &_sca);
	smVector3 operator*(const float &_sca);
	smVector3 operator/(const float &_sca);

	smVector3 operator+=(const float &_sca);
	smVector3 operator-=(const float &_sca);
	smVector3 operator*=(const float &_sca);
	smVector3 operator/=(const float &_sca);

	//comparison
	bool operator==(const smVector3 &_vec) const;
	bool operator!=(const smVector3 &_vec) const;

	//printing
	friend std::ostream& operator<<(std::ostream& out, const smVector3 &_v);
	friend std::ostream& operator<<(std::ostream& out, smVector3 *_v);
};

#endif

