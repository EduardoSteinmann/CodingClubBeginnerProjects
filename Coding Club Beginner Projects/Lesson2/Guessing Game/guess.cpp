#include <iostream>
#include <cstdlib>

int main()
{
    int userGuess = 0;
    int randomNum = rand() % 100;

    std::cout << "Please enter in what you think the number is: ";
    std::cin >> userGuess;

    if (userGuess == randomNum)
    {
        std::cout << "You guessed correctly! Congratulations!";
    }
    else
    {
        std::cout << "You guessed wrong ...";
    }

    return 0;
}