// File: 01-Basics/05-static-data-and-member-function.cpp
// Demonstrates static data members and static member functions in C++
#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;

    // Static data member: shared among all objects of the class
    static int totalStudents;

public:
    // Constructor to initialize object data
    Student(string n, int r)
    {
        name = n;
        rollNo = r;
        totalStudents++; // Every time a student object is created, count increases
    }

    // Static member function: can only access static members
    static int getTotalStudents()
    {
        return totalStudents;
    }

    // Normal function to display student info
    void displayInfo()
    {
        cout << "Name: " << name << ", Roll No: " << rollNo << endl;
    }
};

// Static data member definition (outside the class)
// Must be defined once globally, otherwise linker error
int Student::totalStudents = 0;

int main()
{
    // Creating student objects
    Student s1("Alice", 101);
    Student s2("Bob", 102);
    Student s3("Charlie", 103);

    // Display each student's info
    s1.displayInfo();
    s2.displayInfo();
    s3.displayInfo();

    // Access static member function using class name (recommended way)
    cout << "Total Students: " << Student::getTotalStudents() << endl;

    return 0;
}
