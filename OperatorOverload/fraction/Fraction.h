// Vector3.h
#ifndef	FRACTION_H
#define FRACTION_H
#include <iostream>

class Fraction
{
public:
	Fraction();
	
	Fraction(float n, float d);



	//bool equals(const Vector3& rhs);

	Fraction add(const Fraction& rhs);
	Fraction operator+(const Fraction& rhs);

	void print();

	Fraction sub(const Fraction& rhs);
	Fraction operator-(const Fraction& rhs);

	//Fraction mul(float scalar);
	Fraction operator*(const Fraction& rhs);

	Fraction operator/(const Fraction& rhs);

	
	float mNumerator;
	float mDenominator;
};

//std::istream& operator>>(std::istream& is, Vector3& v);
//std::ostream& operator<<(std::ostream& os, const Vector3& v);

#endif // FRACTION_H
