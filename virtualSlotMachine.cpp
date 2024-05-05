

#include <iostream>
#include <cstdlib>

int Random(int low, int high)
{
    int random = rand() % (high - low + 1) + low;
    return random;
}



int main()
{
    int low = 2;
    int high = 7;
    int bet;
    int chips = 1000;
    int choice;
    int num1, num2, num3;
    int winnings;
    while (true)
    {
        std::cout << "Player's chips: $" << chips << std::endl;
    std::cout << "1) Play slot. 2) Exit." << std::endl;
    std::cin >> choice;
    if (choice == 1)
    {
        std::cout << "Enter your bet: ";
        std::cin >> bet;
        if (bet > 0 && bet <= chips)
        {
            num1 = Random(low, high);
            num2 = Random(low, high);
            num3 = Random(low, high);
            std::cout << num1 << " " << num2 << " " << num3 << std::endl;
            if (num1 == 7 && num2 == 7 && num3 == 7)
            {
                winnings = 10 * bet;
                chips += winnings;
                std::cout << "You win! 3 times 7! Your chips are tenfolded!" << std::endl;
                std::cout << "Player's chips: $" << chips << std::endl;

            }
            else if (num1 == num2 && num2 == num3 && num1 == num3)
            {
                winnings = 5 * bet;
                chips += winnings;
                std::cout << "You win! 3 times Same! Your chips are fivefold!" << std::endl;
                std::cout << "Player's chips: $" << chips << std::endl;


            }
            else if (num1 == num2 || num2 == num3 || num1 == num3)
            {
                winnings = 3 * bet;
                chips += winnings;
                std::cout << "You win! 2 times Same! Your chips are threefold!" << std::endl;
                std::cout << "Player's chips: $" << chips << std::endl;


            }
            else
            {
                chips -= bet;
                std::cout << "You lose! Your chips are now $" << chips << std::endl;

            }

        }
        else
        {
            std::cout << "You did not enter a valid bet." << std::endl;

        }

    }
    else if (choice == 2)
    {
        std::cout << "Exiting the program." << std::endl;
        return 0;

    }
    else
    {
        std::cout << "Invalid choice." << std::endl;

    }
    }
	

}
