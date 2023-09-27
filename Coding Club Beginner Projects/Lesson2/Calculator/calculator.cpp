#include <iostream>

int main()
{
    int num1 = 0;
    char operation = '0';
    int num2 = 0;   

    std::cout << "Please enter in the first number: ";
    std::cin >> num1;

    std::cout << "Please enter in the operation (+, -, *, /, %): ";
    std::cin >> operation;

    std::cout << "Please enter in the second number: ";
    std::cin >> num2;

    int result = 0;

    if (operation == '+')
    {
        result = num1 + num2;
        std::cout << "The result is: " << result << '\n';
    }
    else if (operation == '-')
    {
        result = num1 - num2;
        std::cout << "The result is: " << result << '\n';
    }
    else if (operation == '*')
    {
        result = num1 * num2;
        std::cout << "The result is: " << result << '\n';
    }
    else if (operation == '/')
    {
        result = num1 / num2;
        std::cout << "The result is: " << result << '\n';
    }
    else if (operation == '%')
    {
        result = num1 % num2;
        std::cout << "The result is: " << result << '\n';
    }
    else
    {
        std::cout << "Invalid operation entered...";
    }

    return 0;
}