// 01-basic-inheritance.cpp
// Demonstrates basic single inheritance in C++
#include <iostream>
using namespace std;

// Base class
class Animal
{
public:
    void eat()
    {
        cout << "This animal eats food." << endl;
    }
};

// Derived class
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "The dog barks." << endl;
    }
};

int main()
{
    Dog d;
    d.eat();  // Inherited function
    d.bark(); // Derived function
    return 0;
}
