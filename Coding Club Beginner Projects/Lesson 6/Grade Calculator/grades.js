function createGradeReport(event)
{
    var fileObj = event.target.files[0];

    if (!fileObj)
    {
        return;
    }

    var reader = new FileReader();
    reader.onload = function (event)
    {
        var file = event.target.result;
        var gradeStr = "";
        var report = "Letter Grades:\n";
        var average = 0;
        var gradeAmount = 0;

        for (var i = 0; i < file.length; i++)
        {
            if (file[i] === '\n')
            {
                var grade = gradeStr * 1;
                average += grade;
                gradeAmount++;
                report += getLetterGrade(grade) + '\n';
                gradeStr = "";
                continue;
            }

            gradeStr += file[i];
        }

        average /= gradeAmount;
        report += "Average: " + average + '\n';

        console.log(report);
    };
    reader.readAsText(fileObj);
}

function getLetterGrade(grade)
{
    if (grade >= 90 && grade <= 100)
    {
        return 'A';
    }
    else if (grade >= 80 && grade <= 89)
    {
        return 'B';
    }
    else if (grade >= 70 && grade <= 79)
    {
        return 'C';
    }
    else if (grade >= 60 && grade <= 69)
    {
        return 'D';
    }
    else if (grade >= 0 && grade <= 59)
    {
        return 'F';
    }
    else
    {
        return "";
    }
}

document.getElementById('file-input').addEventListener('change', createGradeReport, false);