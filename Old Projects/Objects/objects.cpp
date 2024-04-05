#include <iostream>
#include <string>
#include <list>

enum Grade
{
    kindergarten,
    first,
    second,
    third,
    fourth,
    fifth,
    sixth,
    seventh,
    eigth,
    ninth,
    tenth,
    eleventh,
    twelveth,
};

class Student
{
public:
    std::string name;
    unsigned int age;
    Grade grade;
    float GPA;
    std::list<std::string> friends;

    Student(std::string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

std::ostream& operator<<(std::ostream& stream, Student s)
{
    stream << "Name: " << s.name << ", Age: " << s.age << ", Grade: " << s.grade << ", GPA: " << s.GPA;
    return stream;
}

int main()
{
    Student s = Student("Alex", 17);
    s.grade = twelveth;
    s.GPA = 4.0f;
    s.friends.push_back("Eduardo");

    std::cout << s << '\n';
}