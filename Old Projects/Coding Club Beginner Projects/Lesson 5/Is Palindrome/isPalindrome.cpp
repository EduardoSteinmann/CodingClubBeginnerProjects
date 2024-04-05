#include <iostream>
#include <string>

//Rudimentary implementation: 
//Doesn't take into account spaces, special characters or anything like that, but for now we'll use it to sbow tbe students how to make an isPalindrome function
std::string reverseString(std::string stringToReverse)
{
    std::string reversed = "";

    for (int i = stringToReverse.length() - 1; i >= 0; i--)
    {
        reversed += stringToReverse[i];
    }

    return reversed;
}

bool isPalindrome(std::string str)
{
    std::string reversedStr = reverseString(str);
    return str == reversedStr;
}

int main()
{
    std::string stringToCheck = "";
    std::cout << "Check if a string is a Palindrome!" << '\n';
    std::cout << "Please enter in the string: " << '\n';
    std::getline(std::cin, stringToCheck);
    std::cout << isPalindrome(stringToCheck);
}