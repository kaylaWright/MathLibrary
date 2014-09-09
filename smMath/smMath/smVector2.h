#ifndef _VECTOR2_H_
#define _VECTOR2_H_

#include <math.h>
#include <iostream>

class smVector2
{
private:
protected:
public:
		//variables
	float x, y;

		//constructor.destructor.
	smVector2(void);
	smVector2(const float &_x, const float &_y);
	smVector2(const smVector2 &_vec); 
	~smVector2(void);

		//manipulations.
	//zeroes out the vector.
	bool Zero();
	//magnitude
	float Magnitude();
	//squared magnitude
	float SqMagnitude();
	//normalized
	smVector2 Normalize();

		//operator overloads
	//vectors
	smVector2 operator=(const smVector2 &_vec);

	smVector2 operator+(const smVector2 &_vec);
	smVector2 operator-(const smVector2 &_vec);

	smVector2 operator+=(const smVector2 &_vec);
	smVector2 operator-=(const smVector2 &_vec);

	//scalars
	smVector2 operator+(const float &_sca);
	smVector2 operator-(const float &_sca);
	smVector2 operator*(const float &_sca);
	smVector2 operator/(const float &_sca);

	smVector2 operator+=(const float &_sca);
	smVector2 operator-=(const float &_sca);
	smVector2 operator*=(const float &_sca);
	smVector2 operator/=(const float &_sca);

	//comparison
	bool operator==(const smVector2 &_vec) const;
	bool operator!=(const smVector2 &_vec) const;

	//printing
	friend std::ostream& operator<<(std::ostream& out, const smVector2 &_v);
	friend std::ostream& operator<<(std::ostream& out, const smVector2 *_v);
};

#endif