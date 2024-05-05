/*
Quadratic Formula
Write a function that inputs (i.e., takes as parameters) the coefficients of a
quadratic equation, and outputs the result.
  */
#include <cmath>
#include <cstdlib>
#include <iostream>
using namespace std;

bool QuadraticFormula(float a, float b, float c, float& r1, float& i1,
    float& r2, float& i2);

int main() {
    float a, b, c, r1, i1, r2, i2;
    cout << "Enter the coefficients of a quadratic equation: ";
    cin >> a >> b >> c;
    if (QuadraticFormula(a, b, c, r1, i1, r2, i2)) {
        cout << "The roots are " << r1 << " + " << i1 << "i and " << r2 << " + "
            << i2 << "i" << endl;

    }
    else {
        cout << "The equation has no real roots" << endl;
        // print solution with imaginary numbers:

        cout << "The roots are " << r1 << " + " << i1 << "i and " << r2 << " + "
            << i2 << "i" << endl;
    }

    return 0;
}
bool QuadraticFormula(float a, float b, float c, float& r1, float& i1,
    float& r2, float& i2) {
    float discriminant = b * b - 4 * a * c;
    // print discriminant
    cout << "The discriminant is " << discriminant << endl;

    if (discriminant >= 0) {
        r1 = (-b + sqrt(discriminant)) / (2 * a);
        r2 = (-b - sqrt(discriminant)) / (2 * a);
        return true;

    }
    else {
        r1 = -b / (2 * a);
        i1 = sqrt(-discriminant) / (2 * a);
        r2 = -b / (2 * a);
        i2 = -sqrt(-discriminant) / (2 * a);
        return false;
    }
}
