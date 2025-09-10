// File: 01-Basics/07-object-as-parameter.cpp
// Demonstrates passing objects as parameters to functions in C++
#include <iostream>
using namespace std;

// A simple class representing a Rectangle
class Rectangle
{
private:
    int width;
    int height;

public:
    // Constructor to initialize width and height
    Rectangle(int w, int h) : width(w), height(h) {}

    // Member function to calculate area
    int area() const
    {
        return width * height;
    }

    // Function to display rectangle dimensions
    void display() const
    {
        cout << "Width: " << width << ", Height: " << height << endl;
    }
};

// Function that takes a Rectangle object as a parameter (by value)
void printAreaByValue(Rectangle rect)
{
    cout << "Area (by value): " << rect.area() << endl;
}

// Function that takes a Rectangle object as a parameter (by reference)
void printAreaByReference(const Rectangle &rect)
{
    cout << "Area (by reference): " << rect.area() << endl;
}

int main()
{
    // Create a Rectangle object
    Rectangle r1(10, 5);

    // Pass object by value
    printAreaByValue(r1);

    // Pass object by reference
    printAreaByReference(r1);

    // Display rectangle dimensions using member function
    r1.display();

    return 0;
}