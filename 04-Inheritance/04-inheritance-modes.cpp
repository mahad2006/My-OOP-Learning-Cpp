// 04-inheritance-modes.cpp
// Demonstrates different inheritance modes in C++
#include <iostream>
using namespace std;

class Base
{
public:
    int publicVar;

protected:
    int protectedVar;

private:
    int privateVar; // never inherited

public:
    Base()
    {
        publicVar = 10;
        protectedVar = 20;
        privateVar = 30;
    }
};

// Public Inheritance
class DerivedPublic : public Base
{
public:
    void show()
    {
        cout << "Public Inheritance:\n";
        cout << "publicVar = " << publicVar << endl;       // ✅ public → public
        cout << "protectedVar = " << protectedVar << endl; // ✅ protected → protected
        // cout << privateVar;  ❌ not accessible
    }
};

// Protected Inheritance
class DerivedProtected : protected Base
{
public:
    void show()
    {
        cout << "\nProtected Inheritance:\n";
        cout << "publicVar = " << publicVar << endl;       // ✅ public → protected
        cout << "protectedVar = " << protectedVar << endl; // ✅ protected → protected
        // cout << privateVar;  ❌ not accessible
    }
};

// Private Inheritance
class DerivedPrivate : private Base
{
public:
    void show()
    {
        cout << "\nPrivate Inheritance:\n";
        cout << "publicVar = " << publicVar << endl;       // ✅ public → private
        cout << "protectedVar = " << protectedVar << endl; // ✅ protected → private
        // cout << privateVar;  ❌ not accessible
    }
};

int main()
{
    DerivedPublic obj1;
    obj1.show();
    cout << "Accessing publicVar directly: " << obj1.publicVar << endl; // ✅ allowed

    DerivedProtected obj2;
    obj2.show();
    // obj2.publicVar;  ❌ Not accessible outside class

    DerivedPrivate obj3;
    obj3.show();
    // obj3.publicVar;  ❌ Not accessible outside class

    return 0;
}
// When to use different inheritance modes:
// - Public Inheritance: Most common; use when "is-a" relationship holds true.
// - Protected Inheritance: Use when you want to restrict access to base class members from outside but allow derived classes to access them.
// - Private Inheritance: Use when you want to completely hide base class members from outside and
