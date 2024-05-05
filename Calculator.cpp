#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int choice;
    double x, y, result;
    do
    {
        cout << "1) cos(x), 2) sin(x), 3) tan(x), 4) atan2(y, x), 5) sqrt(x), 6) x^y, 7) ln(x), 8) e^x, 9) |x|, 10) floor(x), 11) ceil(x), 12. Exit." << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the value of x: ";
            cin >> x;
            result = cos(x);
            cout << "cos(" << x << ") = " << result << endl;
            break;
        case 2:
            cout << "Enter the value of x: ";
            cin >> x;
            result = sin(x);
            cout << "sin(" << x << ") = " << result << endl;
            break;
        case 3:
            cout << "Enter the value of x: ";
            cin >> x;
            result = tan(x);
            cout << "tan(" << x << ") = " << result << endl;
            break;
        case 4:
            cout << "Enter the value of y and x: ";
            cin >> y >> x;
            result = atan2(y, x);
            cout << "atan2(" << y << ", " << x << ") = " << result << endl;
            break;
        case 5:
            cout << "Enter the value of x: ";
            cin >> x;
            result = sqrt(x);
            cout << "sqrt(" << x << ") = " << result << endl;
            break;
        case 6:
            cout << "Enter the value of x and y: ";
            cin >> x >> y;
            result = pow(x, y);
            cout << x << "^" << y << " = " << result << endl;
            break;
        case 7:
            cout << "Enter the value of x: ";
            cin >> x;
            result = log(x);
            cout << "ln(" << x << ") = " << result << endl;
            break;
        case 8:
            cout << "Enter the value of x: ";
            cin >> x;
            result = exp(x);
            cout << "e^" << x << " = " << result << endl;
            break;
        case 9:
            cout << "Enter the value of x: ";
            cin >> x;
            result = abs(x);
            cout << "|x| = " << result << endl;
            break;
        case 10:
            cout << "Enter the value of x: ";
            cin >> x;
            result = floor(x);
            cout << "floor(" << x << ") = " << result << endl;
            break;
        case 11:
            cout << "Enter the value of x: ";
            cin >> x;
            result = ceil(x);
            cout << "ceil(" << x << ") = " << result << endl;
            break;
        case 12:
            cout << "Exiting program..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;


        }
    } while (choice != 12);
    return 0;



}
