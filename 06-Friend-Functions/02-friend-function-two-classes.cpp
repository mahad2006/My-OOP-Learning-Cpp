// 02-friend-function-two-classes.cpp
// Demonstrates friend function accessing private data of two different classes
#include <iostream>
using namespace std;

class ClassB; // Forward declaration (needed because ClassA uses ClassB)

class ClassA
{
private:
    int valueA;

public:
    ClassA(int v) : valueA(v) {}

    // Friend function declaration (will access private data of both A and B)
    friend void addValues(ClassA a, ClassB b);
};

class ClassB
{
private:
    int valueB;

public:
    ClassB(int v) : valueB(v) {}

    // Friend function declaration (same as above)
    friend void addValues(ClassA a, ClassB b);
};

// Friend function definition
void addValues(ClassA a, ClassB b)
{
    cout << "Sum of A and B values = " << (a.valueA + b.valueB) << endl;
}

int main()
{
    ClassA objA(10);
    ClassB objB(20);

    addValues(objA, objB); // Access private data of both classes

    return 0;
}
