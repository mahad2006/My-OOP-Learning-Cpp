// File: 01-Basics/02-constructor-and-destructor.cpp
// Demonstrates constructors and destructors in C++
#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    // Default constructor
    Person()
    {
        name = "Unknown";
        age = 0;
        cout << "Default constructor called." << endl;
    }

    // Parameterized constructor
    Person(string n, int a)
    {
        name = n;
        age = a;
        cout << "Parameterized constructor called." << endl;
    }

    // Copy constructor
    Person(const Person &p)
    {
        name = p.name;
        age = p.age;
        cout << "Copy constructor called." << endl;
    }
    // Destructor
    ~Person()
    {
        cout << "Destructor called for " << name << endl;
    }

    // Function to display person details
    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main()
{
    // Using default constructor
    Person p1;
    p1.display();

    // Destructor will be called automatically for each object when it goes out of scope

    // Using parameterized constructor
    Person p2("Alice", 30);
    p2.display();

    // Using copy constructor
    Person p3 = p2;
    p3.display();

    return 0;
}