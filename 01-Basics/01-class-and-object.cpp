// File: 01-Basics/01-class-and-object.cpp
// Description: Demonstrates the basics of classes and objects in C++
#include <iostream>
using namespace std;

// Revision: Basic class with constructor, member functions, and encapsulation
class Car
{
private:
    // Data members (attributes) are private for encapsulation
    string brand;
    int year;

public:
    // Default constructor
    Car() : brand("Unknown"), year(0) {}

    // Parameterized constructor
    Car(const string &b, int y) : brand(b), year(y) {}

    // Setter functions
    void setBrand(const string &b) { brand = b; }
    void setYear(int y) { year = y; }

    // Getter functions
    string getBrand() const { return brand; }
    int getYear() const { return year; }

    // Member function to display info
    void displayInfo() const
    {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main()
{
    // Creating object using default constructor
    Car car1;
    car1.setBrand("Toyota");
    car1.setYear(2020);
    car1.displayInfo();

    // Creating object using parameterized constructor
    Car car2("Honda", 2022);
    car2.displayInfo();

    // Revision: Accessing data using getter functions
    cout << "Car2 Brand: " << car2.getBrand() << endl;
    cout << "Car2 Year: " << car2.getYear() << endl;

    return 0;
}
