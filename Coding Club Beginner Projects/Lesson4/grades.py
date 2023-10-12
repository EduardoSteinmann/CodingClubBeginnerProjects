amount_of_grades = int(input("Hello! Enter in the amount of grades you want to see the letter for."))

letter_grades = []

for i in range(amount_of_grades):
    print("Enter in grade number", i + 1, ": ", end='')
    grade = float(input(""))
    if grade >= 90 and grade <= 100:
        letter_grades.append('A')
    elif grade >= 80 and grade <= 89:
        letter_grades.append('B')
    elif grade >= 70 and grade <= 79:
        letter_grades.append('C')
    elif grade >= 60 and grade <= 69:
        letter_grades.append('D')
    elif grade >= 0 and grade <= 59:
        letter_grades.append('F')
    else:
        print("Invalid grade entered... Please enter in a valid grade.")
        i -= 1

print("Here are the grade:")
for letter_grade in letter_grades:
    print(letter_grade)