// File: 04-pure-virtual-abstract.cpp
// Description: Demonstrates pure virtual functions and abstract classes in C++
#include <iostream>
using namespace std;

// Abstract base class with a pure virtual function
class Shape
{
public:
    // Pure virtual function: must be overridden in derived classes
    virtual void draw() const = 0;
};

// Derived class: Circle
class Circle : public Shape
{
public:
    // Override the pure virtual function
    void draw() const override
    {
        cout << "Drawing a Circle." << endl;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape
{
public:
    // Override the pure virtual function
    void draw() const override
    {
        cout << "Drawing a Rectangle." << endl;
    }
};

int main()
{
    // Shape s; // Error: cannot instantiate abstract class

    // Create objects of derived classes
    Circle c;
    Rectangle r;

    // Use base class pointer for polymorphism
    Shape *shapes[2];
    shapes[0] = &c;
    shapes[1] = &r;

    // Call draw() using base class pointer
    for (int i = 0; i < 2; ++i)
    {
        shapes[i]->draw();
    }

    return 0;
}
// When to use pure virtual functions and abstract classes:
// - When you want to define an interface that must be implemented by derived classes.
// - To enforce a contract for derived classes to provide specific functionality.
// - To achieve polymorphism where the exact type of the object is determined at runtime.
// - Use abstract classes when you want to prevent instantiation of the base class directly.
// - Use pure virtual functions to create methods that have no implementation in the base class.
// - This is useful in designing frameworks and libraries where you want to define common behavior without providing a default implementation.