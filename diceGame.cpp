#include <cstdlib>
#include <iostream>

void Dice(int& die1, int& die2) {
    die1 = rand() % 6 + 1;
    die2 = rand() % 6 + 1;
}
void Dice(int* die1, int* die2) {
    *die1 = rand() % 6 + 1;
    *die2 = rand() % 6 + 1;
}

using namespace std;

int main() {
    int dice1{ 0 };
    int dice2{ 0 };
    srand(time(0));
    // Call reference function
    cout << "Calling reference function" << endl;
    Dice(dice1, dice2);
    cout << "Dice 1: " << dice1 << endl;
    cout << "Dice 2: " << dice2 << endl;

    // Call pointer function
    cout << "Calling pointer function" << endl;
    Dice(&dice1, &dice2);
    cout << "Dice 1: " << dice1 << endl;
    cout << "Dice 2: " << dice2 << endl;

    int bet1{ 0 };
    int bet2{ 0 };
    int award{ 0 };
    bool dure{ false };

    while (!dure) {

        cout << "1 guess right: 5 Points"
            "2 guesses right: 10 Points"
            "No guesses right: -5 Points"
            << endl;
        cout << "Enter your 1st bet: " << endl;
        cout << "Dice1: ";
        cin >> bet1;
        cout << "Enter your 2nd bet: " << endl;
        cout << "Dice2: ";
        cin >> bet2;
        cout << "You bet " << bet1 << " and " << bet2 << endl;

        Dice(&dice1, &dice2);
        cout << "Dice 1: " << dice1 << endl;
        cout << "Dice 2: " << dice2 << endl;

        if (dice1 == bet1 && dice2 == bet2) {
            award += 10;
            cout << "You won " << award << " points!" << endl;

        }
        else if (dice1 == bet1 || dice2 == bet2 ||
                dice1 == bet2 || dice2 == bet1)
        {
            award += 5;
            cout << "You won " << award << " points!" << endl;

        }
        else {
            award -= 5;
            cout << "You got " << award << " points!" << endl;
        }
        cout << "Your total points: " << award << endl;
        cout << "Would you like to play again? (0 for yes, 1 for no)";
        cin >> dure;
    }

    return 0;
}
