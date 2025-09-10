// 08-array-of-pointers.cpp
// This program demonstrates how to create an array of pointers to objects,
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
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    // Create an array of pointers to Student objects
    Student *arr[n]; // arr[0], arr[1], ..., arr[n-1] are pointers

    // Allocate memory for each Student dynamically
    for (int i = 0; i < n; i++)
    {
        arr[i] = new Student; // each pointer points to a new Student object
    }

    // Input data for each student
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll;
        cout << "Enter name and roll no for student " << i + 1 << ": ";
        cin >> name >> roll;
        arr[i]->setData(name, roll); // using pointer to set data
    }

    // Display data for each student
    cout << "\nStudent Details:\n";
    for (int i = 0; i < n; i++)
    {
        arr[i]->displayData();
    }

    // Free memory for each object
    for (int i = 0; i < n; i++)
    {
        delete arr[i]; // free each Student object
    }

    return 0;
}
