// File: 03-virtual-destructor.cpp
#include <iostream>
using namespace std;

class Base
{
public:
    Base() { cout << "Base ctor\n"; }
    virtual ~Base() { cout << "Base dtor\n"; } // virtual destructor!
};

class Derived : public Base
{
private:
    int *arr;

public:
    Derived()
    {
        cout << "Derived ctor\n";
        arr = new int[5]; // simulate resource allocation
    }
    ~Derived()
    {
        cout << "Derived dtor\n";
        delete[] arr; // cleanup
    }
};

int main()
{
    Base *p = new Derived(); // create Derived but pointer is Base*
    delete p;                // important: virtual destructor ensures Derived destructor runs
    return 0;
}
// When to use virtual destructors:
// - Always use virtual destructors in base classes when you have virtual functions.