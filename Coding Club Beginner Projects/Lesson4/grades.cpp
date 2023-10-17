#include <iostream>

int main()
{
    int amountOfGrades = 0;
    std::cout << "Hello! Enter in the amount of grades you want to see the letter for.";
    std::cin >> amountOfGrades;

    char letterGrades[amountOfGrades];

    double grade = 0;

    for (int i = 0; i < amountOfGrades; i++)
    {
        std::cout << "Enter in grade number " << i + 1 << ": ";
        std::cin >> grade;

        if (grade >= 90 && grade <= 100)
        {
            letterGrades[i] = 'A';
        }
        else if (grade >= 80 && grade <= 89)
        {
            letterGrades[i] = 'B';
        }
        else if (grade >= 70 && grade <= 79)
        {
            letterGrades[i] = 'C';
        }
        else if (grade >= 60 && grade <= 69)
        {
            letterGrades[i] = 'D';
        }
        else if (grade >= 0 && grade <= 59)
        {
            letterGrades[i] = 'F';
        }
        else
        {
            std::cout << "Invalid grade entered... Please enter in a valid grade.\n";
            i--;
        }
    }

    for (int i = 0; i < amountOfGrades; i++)
    {
        std::cout << "Here are the grades:\n";
        std::cout << letterGrades[i] << '\n';
    }
}