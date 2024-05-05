


#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

void RandomArrayFill(int* array, int size);
// write the same function this time using std::vector:
void RandomArrayFill(std::vector<int>& array);

int main() {
    srand(time(0));
    // asks the user to input the size of an integer arra
    int size{ 0 };
    cout << "Enter the size of an array to create: ";
    cin >> size;

    // creates an array of exactly this size
    int* array = new int[size];
    // Next, the program must pass this created array to the    //RandomArrayFill
    // function, so that a random number is
    // assigned
    RandomArrayFill(array, size);

    // delete dynamic memory
    delete[] array;

    cout << "Enter the size of an array vector to create: ";
    cin >> size;
    // creates an array of exactly this size
    std::vector<int> array2(size);

    RandomArrayFill(array2);

    return 0;
}
void RandomArrayFill(int* array, int size) {
    // write a random number, in the range [0, 100], to each    //element of the
    // array.
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 100;
    }
    // output every array element to the console window
    cout << "Array = {";
    for (int i = 0; i < size; i++) {
        cout << array[i];
        if (i < size - 1) {
            cout << ", ";
        }
    }
    cout << "}" << endl;
}

void RandomArrayFill(std::vector<int>& array) {
    // write a random number, in the range [0, 100], to each    //element of the
    // array
    for (int i = 0; i < array.size(); i++) {
        array[i] = rand() % 100;
    }
    // output every array element to the console window
    cout << "Array = {";
    for (int i = 0; i < array.size(); i++) {
        cout << array[i];
        if (i < array.size() - 1) {
            cout << ", ";
        }
    }
    cout << "}" << endl;
}
