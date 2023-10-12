#include <iostream>

int main()
{
    int amount_of_grades = 0;
    std::cout << "Hello! Enter in the amount of grades you want to see the letter for.";
    std::cin >> amount_of_grades;

    char letter_grades[amount_of_grades];

    double grade = 0;

    for (int i = 0; i < amount_of_grades; i++)
    {
        std::cout << "Enter in grade number " << i + 1 << ": ";
        std::cin >> grade;

        if (grade >= 90 && grade <= 100)
        {
            letter_grades[i] = 'A';
        }
        else if (grade >= 80 && grade <= 89)
        {
            letter_grades[i] = 'B';
        }
        else if (grade >= 70 && grade <= 79)
        {
            letter_grades[i] = 'C';
        }
        else if (grade >= 60 && grade <= 69)
        {
            letter_grades[i] = 'D';
        }
        else if (grade >= 0 && grade <= 59)
        {
            letter_grades[i] = 'F';
        }
        else
        {
            std::cout << "Invalid grade entered... Please enter in a valid grade.\n";
            i--;
        }
    }

    for (int i = 0; i < amount_of_grades; i++)
    {
        std::cout << "Here are the grades:\n";
        std::cout << letter_grades[i] << '\n';
    }
}