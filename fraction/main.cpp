


// main.cpp
#include "Fraction.h"
#include <iostream>
using namespace std;




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




	return 0;

}