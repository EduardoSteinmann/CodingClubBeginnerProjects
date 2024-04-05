from enum import Enum

class Grade(Enum):
    Kindergarten = 0
    First = 1
    Second = 2
    Third = 3
    Fourth = 4
    Fifth = 5
    Sixth = 6
    Seventh = 7
    Eight = 8
    Ninth = 9
    Tenth = 10
    Eleventh = 11
    Twelveth = 12

class Student:
    name = ""
    age = 0
    grade = None
    GPA = 0.0
    friends = []

    def __init__(self, name, age):
        self.name = name
        self.age = age

    def __str__(self):
        return f'Name: {self.name}, Age: {self.age}, Grade: {self.grade}, GPA: {self.GPA}'


if __name__ == "__main__":
    s = Student("Alex", 17);
    s.grade = Grade.Twelveth
    s.GPA = 4.0
    s.friends.append("Eduardo")

    print(s)