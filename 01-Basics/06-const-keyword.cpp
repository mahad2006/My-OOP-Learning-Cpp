// File: 01-Basics/06-const-keyword.cpp
// Demonstrates const object, const member function, and const parameter in C++
#include <iostream>
using namespace std;

// A class demonstrating const object, const member function, and const parameter
class Rectangle
{
private:
    int length;
    int width;

public:
    // Constructor with const parameters (parameters themselves are not modified)
    Rectangle(const int l, const int w)
    {
        length = l;
        width = w;
    }

    // Const member function: promises not to modify any member variables
    int area() const
    {
        // length and width cannot be modified here
        return length * width;
    }

    // Non-const member function: can modify member variables
    void setLength(int l)
    {
        length = l;
    }

    // Const member function with const parameter
    void printArea(const string &label) const
    {
        // label cannot be modified, and neither can member variables
        cout << label << ": " << area() << endl;
    }
};

int main()
{
    // Creating a const object: cannot modify its state after creation
    const Rectangle rect1(10, 5);

    // Allowed: calling const member functions
    cout << "Area of rect1: " << rect1.area() << endl;
    rect1.printArea("Const Rectangle");

    // Not allowed: calling non-const member functions on const object
    // rect1.setLength(20); // Error!

    // Creating a non-const object
    Rectangle rect2(7, 3);
    rect2.setLength(9); // Allowed

    // When to use const:
    // - Use const objects when you want to guarantee immutability.
    // - Use const member functions for operations that do not modify object state.
    // - Use const parameters to prevent accidental modification of arguments.

    return 0;
}