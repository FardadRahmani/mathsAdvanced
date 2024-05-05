// main.cpp
#include "Vector3.h"
#include <iostream>
using namespace std;




int main()
{
	// Part 1: Construct three vectors.
	float coords[3] = { 1.0f, 2.0f, 3.0f };
	Vector3 u;
	Vector3 v(coords);
	Vector3 w(-5.0f, 2.0f, 0.0f);
	// Part 2: Print the three vectors.
	cout << "u = ";
	//u.print();
	cout << u;
	cout << "v = ";
	//v.print();
	cout << v;
	cout << "w = ";
	//w.print();
	cout << w;
	cout << endl;


	// Part3:ADD: u = v + w
	//u = v.add(w);
	u = v + w;
	cout << "v.add(w) = ";
	u.print();
	cout << endl;

	//Part 4 subtract
	//u = v.sub(w);
	u = v - w;
	cout << "v.sub(w) = ";
	u.print();
	cout << endl;

	// Part 4: Unit Vector: v = v / ||v||
	v.normalize();
	cout << "unit v = ";
	v.print();
	cout << "v.length() = " << v.length() << endl;
	cout << endl;


	// Part 5: dotP = u * w
	//float dotP = u.dot(w);
	float dotP = u*w;
	cout << "u.dot(w) = " << dotP<<endl<<endl;

	//Part 6 Scalar Product
	Vector3 scalVec;
	scalVec = u.mul(5);
	//scalVec = u * 5;
	cout << "u.mul(5) = " ;
	scalVec.print();
	cout << endl;

	// Part 6: Convert to array representation.
	//float* vArray = v.toFloatArray();
	float* vArray = (float*) v; 

	// Print out each element and verify it matches the
	// components of v.
	cout <<
		"[0] = " << vArray[0] << ", "
		"[1] = " << vArray[1] << ", "
		"[2] = " << vArray[2] << endl;
	cout << endl;


	// Part 7: Create a new vector and have user specify its
	// components, then print the vector.
	cout << "Input vector..." << endl;
	Vector3 m;
	//m.input();
	cin >> m;
	cout << endl;
	cout << "m = ";
	//m.print();
	cout << m;






	//Using overloaded Operators:

}