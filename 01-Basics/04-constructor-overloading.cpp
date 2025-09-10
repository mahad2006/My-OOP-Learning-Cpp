// File: 01-Basics/04-constructor-overloading.cpp
// Demonstrates constructor overloading in C++
#include <iostream>
using namespace std;
// Class demonstrating constructor overloading
class Rectangle
{
    int width, height;

public:
    // Default constructor
    Rectangle()
    {
        width = 0;
        height = 0;
        cout << "Default constructor called." << endl;
    }

    // Parameterized constructor
    Rectangle(int w, int h)
    {
        width = w;
        height = h;
        cout << "Parameterized constructor called." << endl;
    }

    // Copy constructor
    Rectangle(const Rectangle &rect)
    {
        width = rect.width;
        height = rect.height;
        cout << "Copy constructor called." << endl;
    }

    // Function to calculate area
    int area()
    {
        return width * height;
    }
};

int main()
{
    Rectangle r1;        // Calls default constructor
    Rectangle r2(10, 5); // Calls parameterized constructor
    Rectangle r3 = r2;   // Calls copy constructor

    cout << "Area of r1: " << r1.area() << endl;
    cout << "Area of r2: " << r2.area() << endl;
    cout << "Area of r3: " << r3.area() << endl;

    return 0;
}
