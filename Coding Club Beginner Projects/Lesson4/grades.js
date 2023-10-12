var amountOfGrades = prompt("Hello! Enter in the amount of grades you want to see the letter for.");

var letterGrades = [];

for (var i = 0; i < amountOfGrades; i++)
{
    var grade = prompt("Enter in grade number " + i + 1 + ": ");

    if (grade >= 90 && grade <= 100)
    {
        letterGrades.push('A');
    }
    else if (grade >= 80 && grade <= 89)
    {
        letterGrades.push('B');
    }
    else if (grade >= 70 && grade <= 79)
    {
        letterGrades.push('C');
    }
    else if (grade >= 60 && grade <= 69)
    {
        letterGrades.push('D');
    }
    else if (grade >= 0 && grade <= 59)
    {
        letterGrades.push('F');
    }
    else
    {
        console.log("Invalid grade entered... Please enter in a valid grade.");
        i--;
    }
}

for (var i = 0; i < amountOfGrades; i++)
{
    console.log("Here are the grades:\n");
    console.log(letterGrades[i] + "\n");
}