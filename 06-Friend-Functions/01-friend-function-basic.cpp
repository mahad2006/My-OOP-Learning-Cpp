// 01-friend-function-basic.cpp
// Demonstrates basic usage of friend functions in C++
#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int marks;

public:
    // Constructor
    Student(string n, int m)
    {
        name = n;
        marks = m;
    }

    // Friend function declaration inside class
    friend void displayStudentInfo(Student s);
};

// Friend function definition (outside class)
void displayStudentInfo(Student s)
{
    // Friend function can access private data directly
    cout << "Name: " << s.name << ", Marks: " << s.marks << endl;
}

int main()
{
    Student s1("Alice", 85);
    Student s2("Bob", 90);

    // Calling friend function (just like normal function)
    displayStudentInfo(s1);
    displayStudentInfo(s2);

    return 0;
}
// When to use friend functions:
// - When a function needs access to private data of a class but is not a member of that class.
// - To allow external functions to operate on class data without exposing it publicly.
// - Use sparingly, as it breaks encapsulation to some extent.
// - Prefer member functions or getters/setters for regular access to private data.