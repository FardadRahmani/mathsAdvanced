
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

	//Relation Operators
	bool operator==(const Fraction& rhs);
	bool operator<(const Fraction& rhs);
	
	float mNumerator;
	float mDenominator;
};

//std::istream& operator>>(std::istream& is, Vector3& v);
//std::ostream& operator<<(std::ostream& os, const Vector3& v);


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
void Fraction::operator<<(const Fraction& rhs)
{
	cout << rhs.mNumerator << "/ " << rhs.mDenominator << "\n";
}


//Relational operators
bool Fraction::operator==(const Fraction& rhs)
{
	
	return this->mNumerator == rhs.mNumerator && this->mDenominator == rhs.mDenominator;
}

bool Fraction::operator<(const Fraction& rhs)
{
	Fraction tmp, tmp1;
	tmp = *this;
	tmp1 = rhs;
	tmp.mNumerator *= tmp1.mDenominator;
	tmp1.mNumerator *= tmp.mDenominator;
	return tmp.mNumerator < tmp1.mNumerator;
}





int main()
{
	// Part 1: Construct three fractions.

	Fraction add, sub, mul, div;
	Fraction f1(2.0f, 4.0f);
	f1.print();
	Fraction f2(3.0f, 7.0f);
	f2.print();
	cout << endl;

	//ADD
	cout << "Add von f1 und f2:" << endl;
	add = f1 + f2;
	add.print();
	cout << endl;
	cout << endl;

	//SUB
	cout << "Sub von f1 und f2:" << endl;
	sub = f1 - f2;
	sub.print();
	cout << endl;
	cout << endl;

	//Mul
	cout << "Mul von f1 und f2:" << endl;
	mul = f1 * f2;
	mul.print();
	cout << endl;
	cout << endl;


	//Div
	cout << "Div von f1 und f2:" << endl;
	div = f1 / f2;
	div.print();
	cout << endl;
	cout << endl;

	if (f1 < f2)
	{
		cout << f1 << "kleiner als"
	}



	return 0;

}