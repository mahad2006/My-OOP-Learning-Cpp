// File: 05-runtime-object-creation.cpp
// This program demonstrates runtime object creation with polymorphism
#include <iostream>
#include <vector>
using namespace std;

// Base class
class Shape
{
public:
    virtual void draw() = 0; // Pure virtual function (abstract class)
    virtual ~Shape() {}      // Virtual destructor for safe cleanup
};

// Derived class: Circle
class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing Circle\n";
    }
};

// Derived class: Rectangle
class Rectangle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing Rectangle\n";
    }
};

int main()
{
    vector<Shape *> shapes; // Store base class pointers
    int n;
    cout << "Enter number of shapes: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter shape type (1 for Circle, 2 for Rectangle): ";
        int choice;
        cin >> choice;

        if (choice == 1)
        {
            shapes.push_back(new Circle());
        }
        else if (choice == 2)
        {
            shapes.push_back(new Rectangle());
        }
        else
        {
            cout << "Invalid choice. Skipping...\n";
        }
    }

    cout << "\nDrawing all shapes:\n";
    for (Shape *s : shapes)
    {
        s->draw(); // Late binding: correct draw() runs at runtime
    }

    // Cleanup
    for (Shape *s : shapes)
    {
        delete s; // Calls correct derived destructor because it's virtual
    }

    return 0;
}
// When to use runtime object creation with polymorphism:
// - When the exact types of objects are not known at compile time.