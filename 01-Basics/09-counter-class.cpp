// File: 01-Basics/09-counter-class.cpp
// Description: Demonstrates the use of static members in a class to count objects
#include <iostream>
using namespace std;

class Counter
{
private:
    // Static member to keep track of object count
    static int objectCount;

public:
    // Constructor increments object count each time an object is created
    Counter()
    {
        objectCount++;
    }

    // Static function to get the current count of objects
    static int getObjectCount()
    {
        return objectCount;
    }
};

// Initialize static member variable
int Counter::objectCount = 0;

int main()
{
    system("cls");
    // Creating objects of Counter class
    Counter obj1;
    Counter obj2;
    Counter obj3;

    // Display the number of objects created
    cout << "Number of Counter objects created: " << Counter::getObjectCount() << endl;

    return 0;
}