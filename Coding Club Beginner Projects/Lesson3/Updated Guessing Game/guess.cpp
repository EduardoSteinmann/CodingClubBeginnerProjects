#include <iostream>
#include <random>

/* 
 * Even if no one askes this, this can also serve as a guideline as to what to talk about.
 * Possible questions and answers:
 * Q: How does std::rand() work?
 * A: std::rand() returns a random very large number. If we want to restrict
 * the range of random numbers, we can use the modulus(%) operator to give
 * us the remainder of that large number if we divide it by the range that we want.
 * For example, "std::rand() % 10" would give us a random number between 0 and 10.
 * The numbers it could give are {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}. Notice that 10 is not in the list.
 * This is because the modulus operator gives us the remainder of the division.
 * If our remainder is 10, then that means the number is cleanly divisible by 10,
 * meaning the remainder is 0.
 */

int main()
{
    int userGuess = 0;
    int randomNum = std::rand() % 100;

    std::cout << "You will have 6 guesses.\n";

    bool won = false;

    for (int i = 0; i < 6; i++)
    {
        std::cout << "Please enter in what you think the number is: ";
        std::cin >> userGuess;

        if (userGuess == randomNum)
        {
            std::cout << "You guessed correctly! Congratulations!\n";
            won = true;
            break;
        }
        else
        {
            std::cout << "You guessed wrong ...\n";
        }
    }

    if (won)
    {
        std::cout << "Congratulations! You won!\n";
    }
    else
    {
        std::cout << "You lost...\n";
    }

    return 0;
}