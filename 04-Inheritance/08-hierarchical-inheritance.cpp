// Demonstrates hierarchical inheritance
#include <iostream>
using namespace std;

class Base
{
public:
    void displayBase() { cout << "Base class\n"; }
};

class Derived1 : public Base
{
public:
    void displayD1() { cout << "Derived1 class\n"; }
};

class Derived2 : public Base
{
public:
    void displayD2() { cout << "Derived2 class\n"; }
};

int main()
{
    Derived1 d1;
    Derived2 d2;
    d1.displayBase();
    d1.displayD1();
    d2.displayBase();
    d2.displayD2();
    return 0;
}
