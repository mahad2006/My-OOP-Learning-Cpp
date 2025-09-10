#include <iostream>
using namespace std;

// Base class
class Vehicle
{
public:
    void displayInfo()
    {
        cout << "This is a vehicle." << endl;
    }
};

// Derived class
class Car : public Vehicle
{
public:
    // Overriding the base class function
    void displayInfo()
    {
        cout << "This is a car." << endl;
    }
};

int main()
{
    Vehicle v;
    Car c;

    cout << "Calling function using Vehicle object:" << endl;
    v.displayInfo(); // Base class version will be called

    cout << "\nCalling function using Car object:" << endl;
    c.displayInfo(); // Derived class version will be called (Overriding)

    cout << "\nCalling base class function using scope resolution operator:" << endl;
    c.Vehicle::displayInfo(); // Call base class version explicitly
    return 0;
}
// When to use function overriding:
// - When a derived class needs to provide a specific implementation of a function already defined in its base class.
// - To achieve runtime polymorphism when using base class pointers or references to derived class objects.
// - Use the same function signature (name, parameters, and constness) in both base and derived classes.

