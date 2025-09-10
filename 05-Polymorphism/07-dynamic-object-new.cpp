// 07-dynamic-object-new.cpp
// This program demonstrates dynamic object creation using 'new' keyword
#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;

public:
    void setData(string n, int r)
    {
        name = n;
        rollNo = r;
    }

    void displayData()
    {
        cout << "Name: " << name << ", Roll No: " << rollNo << endl;
    }
};

int main()
{
    // Creating object dynamically using 'new'
    Student *ptr = new Student; // Allocates memory at runtime for a Student object

    // Accessing members using pointer
    ptr->setData("Alice", 101);
    ptr->displayData();

    // Free the memory after use
    delete ptr;    // Prevents memory leaks
    ptr = nullptr; // Good practice to avoid dangling pointer

    return 0;
}
