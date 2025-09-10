// 03-Abstraction/01-abstract-class.cpp
// Demonstrates the use of abstract classes and pure virtual functions in C++.
#include <iostream>
using namespace std;

// Abstract base class representing a generic Shape
class Shape
{
public:
    // Pure virtual function for calculating area
    virtual double area() const = 0;

    // Virtual destructor for proper cleanup of derived objects
    virtual ~Shape() {}
};

// Derived class representing a Rectangle
class Rectangle : public Shape
{
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    // Override area() to calculate rectangle area
    double area() const override
    {
        return width * height;
    }
};

// Derived class representing a Circle
class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Override area() to calculate circle area
    double area() const override
    {
        return 3.14159 * radius * radius;
    }
};

int main()
{
    // Create objects of derived classes
    Shape *rect = new Rectangle(5.0, 3.0);
    Shape *circ = new Circle(2.0);

    // Demonstrate abstraction: use base class pointer to call area()
    cout << "Rectangle area: " << rect->area() << endl;
    cout << "Circle area: " << circ->area() << endl;

    // Clean up
    delete rect;
    delete circ;

    return 0;
}