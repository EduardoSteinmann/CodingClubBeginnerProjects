#include <iostream>

bool isPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    std::cout << "Check if a number is prime!" << '\n';
    std::cout << "Please enter in the number: " << '\n';

    int number;

    std::cin >> number;

    std::cout << isPrime(number);

    return 0;
}