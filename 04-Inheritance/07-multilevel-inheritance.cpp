// Demonstrates multilevel inheritance
#include <iostream>
using namespace std;

class Grandparent
{
public:
    void showG() { cout << "Grandparent class\n"; }
};

class Parent : public Grandparent
{
public:
    void showP() { cout << "Parent class\n"; }
};

class Child : public Parent
{
public:
    void showC() { cout << "Child class\n"; }
};

int main()
{
    Child c;
    c.showG();
    c.showP();
    c.showC();
    return 0;
}
