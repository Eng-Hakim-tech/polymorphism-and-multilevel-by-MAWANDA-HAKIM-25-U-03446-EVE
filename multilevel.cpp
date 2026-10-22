#include <iostream>
#include <string>
using namespace std;

// Base class
class Person
{
public:
    string name;
    int age;

    void displayPerson()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class
class Student : public Person
{
public:
    int studentID;

    void displayStudent()
    {
        cout << "Student ID: " << studentID << endl;
    }
};

// Further derived class
class EngineeringStudent : public Student
{
public:
    string course;

    void displayEngineering()
    {
        cout << "Course: " << course << endl;
    }
};

int main()
{
    EngineeringStudent s;

    // Members inherited from Person
    s.name = "Eng HAKIM";
    s.age = 21;

    // Member inherited from Student
    s.studentID = 54564;

    // Member defined in EngineeringStudent
    s.course = "COMPUTER & COMMUNICATIONS Engineering";

    cout << "ENGINEERING STUDENT DETAILS" << endl;

    s.displayPerson();
    s.displayStudent();
    s.displayEngineering();

    return 0;
}