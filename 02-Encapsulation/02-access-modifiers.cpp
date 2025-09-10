/*
    02-access-modifiers.cpp
    Demonstrates access modifiers in C++ (public, private, protected)
*/
#include <iostream>
using namespace std;

// A simple class to show access modifiers
class Person
{
private:
    // Private members: accessible only within the class
    string name;
    int age;

protected:
    // Protected members: accessible within the class and derived classes
    string address;

public:
    // Public members: accessible from anywhere
    void setName(string n)
    {
        name = n;
    }

    void setAge(int a)
    {
        age = a;
    }

    void setAddress(string addr)
    {
        address = addr;
    }

    void displayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
    }
};

// Derived class to show protected access
class Student : public Person
{
public:
    void updateAddress(string newAddr)
    {
        // Can access protected member 'address' directly
        address = newAddr;
    }
};

int main()
{
    Person p;
    p.setName("Alice");
    p.setAge(30);
    p.setAddress("123 Main St");
    p.displayInfo();

    Student s;
    s.setName("Bob");
    s.setAge(20);
    s.setAddress("456 College Ave");
    s.updateAddress("789 University Rd");
    s.displayInfo();

    // Uncommenting the following lines will cause compilation errors:
    // p.name = "Charlie";      // Error: 'name' is private
    // s.address = "New Addr";  // Error: 'address' is protected

    return 0;
}