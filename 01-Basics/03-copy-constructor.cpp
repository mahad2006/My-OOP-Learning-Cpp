// File: 01-Basics/03-copy-constructor.cpp
// Demonstrates copy constructor in C++
#include <iostream>
using namespace std;

// A simple class to demonstrate copy constructor
class Point
{
    int x, y;

public:
    // Default constructor
    Point(int x_val, int y_val) : x(x_val), y(y_val)
    {
        cout << "Default constructor called\n";
    }

    // Copy constructor
    Point(const Point &p) : x(p.x), y(p.y)
    {
        cout << "Copy constructor called\n";
    }

    // Function to display coordinates
    void display() const
    {
        cout << "Point(" << x << ", " << y << ")\n";
    }
};

int main()
{
    Point p1(10, 20); // Calls default constructor
    p1.display();

    Point p2 = p1; // Calls copy constructor
    p2.display();

    Point p3(p2); // Also calls copy constructor
    p3.display();

    return 0;
}