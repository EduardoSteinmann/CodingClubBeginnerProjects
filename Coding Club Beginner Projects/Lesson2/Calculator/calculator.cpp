#include <iostream>

/* 
 * Possible questions and answers:
 * Q: How does std::cin work?
 * A: Think of the ">>" as a little arrow that's saying "put whatever the user entered into this variable".
 * 
 * Q: Why do we use "==" and not just "=" to compare variables?
 * A: This is found in almost all programming languages, and it's because the "=" is the 
 * *assignment operator*, which is just programming jargon for "it sets the value of a variable".
 * If we put "operator = '+'", C++ would think that we are setting the operation variable to '+'.
 * To avoid this, we use "==".
 * 
 * Q: Why do we "return -1" if the operation the user entered is invalid?
 * A: It is custom to return 0 if the program completed successfully. That's why
 * we do it at the end of the main function. Since entering an invalid operation
 * would cause the program to fail, we want our return to show that, so we return -1.
 * 
 * Q: what is the "%" thing?
 * A: That is the "modulus" operator. What it does is it take the number on the left
 * and divides it by the number on the right and then return the remainder. So 10 % 7 would equal 3,
 * because 10 divided by 7 is 1, with a remainder of 3.
 */

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
    }
    else if (operation == '-')
    {
        result = num1 - num2;
    }
    else if (operation == '*')
    {
        result = num1 * num2;
    }
    else if (operation == '/')
    {
        result = num1 / num2;
    }
    else if (operation == '%')
    {
        result = num1 % num2;
    }
    else
    {
        std::cout << "Invalid operation entered...\n";
        return -1;
    }

    std::cout << "The result is: " << result << '\n';

    return 0;
}