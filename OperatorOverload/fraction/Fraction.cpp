#include "Fraction.h"
using namespace std;



Fraction::Fraction()
{
	mNumerator = 0;
	mDenominator = 1;

}

Fraction::Fraction(float n, float d)
{
	mNumerator = n;
	mDenominator = d;

}


//ADD
Fraction Fraction::add(const Fraction& rhs)
{
	Fraction tmp;
	tmp = *this;

	if (mDenominator == rhs.mDenominator)
	{
		tmp.mNumerator = mNumerator + rhs.mNumerator;

	}
	else {
		tmp.mDenominator = mDenominator * rhs.mDenominator;
		tmp.mNumerator = mNumerator * rhs.mDenominator + rhs.mNumerator * mDenominator;
	}

	return tmp;
}
Fraction Fraction::operator+(const Fraction& rhs)
{
	Fraction tmp;
	tmp = *this;

	if (mDenominator == rhs.mDenominator)
	{
		tmp.mNumerator = mNumerator + rhs.mNumerator;
		
	}
	else {
		tmp.mDenominator = mDenominator * rhs.mDenominator;
		tmp.mNumerator = mNumerator * rhs.mDenominator + rhs.mNumerator * mDenominator;
	}
	
	return tmp;
}

//subtract
Fraction Fraction::sub(const Fraction& rhs)
{
	Fraction tmp;
	tmp = *this;

	if (mDenominator == rhs.mDenominator)
	{
		tmp.mNumerator = mNumerator - rhs.mNumerator;

	}
	else {
		tmp.mDenominator = mDenominator * rhs.mDenominator;
		tmp.mNumerator = mNumerator * rhs.mDenominator - rhs.mNumerator * mDenominator;
	}

	return tmp;
}

Fraction Fraction::operator-(const Fraction& rhs)
{
	Fraction tmp;
	tmp = *this;

	if (mDenominator == rhs.mDenominator)
	{
		tmp.mNumerator = mNumerator - rhs.mNumerator;

	}
	else {
		tmp.mDenominator = mDenominator * rhs.mDenominator;
		tmp.mNumerator = mNumerator * rhs.mDenominator - rhs.mNumerator * mDenominator;
	}

	return tmp;
}

//Multiplication
Fraction Fraction::operator*(const Fraction& rhs)
{
	Fraction tmp;
	tmp = *this;
	tmp.mNumerator *= rhs.mNumerator;
	tmp.mDenominator *= rhs.mDenominator;
	return tmp;
}


//Div
Fraction Fraction::operator/(const Fraction& rhs)
{
	Fraction tmp;
	tmp = *this;
	tmp.mNumerator *= rhs.mDenominator;
	tmp.mDenominator *= rhs.mNumerator;
	return tmp;
}


//print
void Fraction::print()
{
	cout << mNumerator << "/ " << mDenominator << "\n";
}