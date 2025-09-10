#include <iostream>
using namespace std;
// Demonstrates constructors with parameters in inheritance
class Base
{
    int x;

public:
    // Constructor with parameter
    Base(int a)
    {
        x = a;
        cout << "Base Constructor called, x = " << x << endl;
    }
    // Destructor
    ~Base()
    {
        cout << "Base Destructor called\n";
    }
};

class Derived : public Base
{
private:
    int y;

public:
    // Derived constructor passes parameter to Base constructor
    Derived(int a, int b) : Base(a), y(b)
    {
        cout << "Derived Constructor called, y = " << y << endl;
    }
    // Destructor
    ~Derived()
    {
        cout << "Derived Destructor called\n";
    }
};

int main()
{
    Derived obj(10, 20);
    return 0;
}
// When to use constructor parameters in inheritance:
// - When the base class requires parameters for initialization.