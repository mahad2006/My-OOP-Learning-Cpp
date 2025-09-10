// Demonstrates hybrid inheritance (Combination)
#include <iostream>
using namespace std;

class A
{
public:
    void displayA() { cout << "Class A\n"; }
};
class B : public A
{
public:
    void displayB() { cout << "Class B\n"; }
};
class C
{
public:
    void displayC() { cout << "Class C\n"; }
};

// D inherits from both B (which inherits A) and C → Hybrid
class D : public B, public C
{
public:
    void displayD() { cout << "Class D\n"; }
};

int main()
{
    D obj;
    obj.displayA(); // From A
    obj.displayB(); // From B
    obj.displayC(); // From C
    obj.displayD(); // From D
    return 0;
}
