// Demonstrates multiple inheritance
#include <iostream>
using namespace std;

class A
{
public:
    void displayA() { cout << "Class A\n"; }
};
class B
{
public:
    void displayB() { cout << "Class B\n"; }
};

// C inherits from both A and B
class C : public A, public B
{
public:
    void displayC() { cout << "Class C\n"; }
};

int main()
{
    C obj;
    obj.displayA();
    obj.displayB();
    obj.displayC();
    return 0;
}
