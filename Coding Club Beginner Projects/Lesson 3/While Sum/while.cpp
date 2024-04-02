#include <iostream>

int main()
{
    int total = 0;

    while (true)
    {
        int num = 0;
        std::cout << "Please enter in a non-negative number to add to the total, or a negative number to stop: ";
        std::cin >> num;

        if (num < 0)
        {
            break;
        }

        total += num;
    }

    std::cout << "The total is: " << total;
}