// 06-pointer-to-object.cpp
// This program demonstrates the use of pointers to objects in C++
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
    Student s;    // Normal object
    Student *ptr; // Pointer to Student object

    ptr = &s; // Pointer now stores address of object 's'

    // Accessing members using pointer
    ptr->setData("Alice", 101); // Using arrow operator ->
    ptr->displayData();

    return 0;
}
