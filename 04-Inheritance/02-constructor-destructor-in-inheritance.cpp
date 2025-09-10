// 02-constructor-destructor-in-inheritance.cpp
// Demonstrates constructor and destructor order in inheritance
#include <iostream>
using namespace std;
// Base class
class Base
{
public:
    // Constructor
    Base()
    {
        cout << "Base Constructor called\n";
    }
    // Destructor
    ~Base()
    {
        cout << "Base Destructor called\n";
    }
};
// Derived class inheriting from Base
class Derived : public Base
{
public:
    // Constructor
    Derived()
    {
        cout << "Derived Constructor called\n";
    }
    // Destructor
    ~Derived()
    {
        cout << "Derived Destructor called\n";
    }
};

int main()
{
    cout << "Creating Derived Object...\n";
    Derived obj; // Base constructor runs first, then Derived constructor
    cout << "Object Created.\n";

    cout << "Destroying Object...\n";
    // Destructor calls automatically when main ends
    return 0;
}