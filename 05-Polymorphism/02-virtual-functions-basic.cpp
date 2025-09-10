// File: 02-virtual-functions-basic.cpp
// Description: Demonstrates basic usage of virtual functions in C++
#include <iostream>
using namespace std;

class Animal
{
public:
    // virtual keyword enables runtime polymorphism
    virtual void sound()
    {
        cout << "Animal makes a sound\n";
    }

    // Non-virtual function for comparison
    void eat()
    {
        cout << "Animal eats (base)\n";
    }
};

class Dog : public Animal
{
public:
    // Overrides virtual function
    void sound() override
    { // 'override' helps the compiler check signature
        cout << "Dog barks\n";
    }

    // Hides non-virtual function (not overriding)
    void eat()
    {
        cout << "Dog eats (derived)\n";
    }
};

int main()
{
    Dog d;
    Animal a;

    cout << "Direct calls using objects:\n";
    a.sound(); // Animal's sound
    d.sound(); // Dog's sound

    cout << "\nCalls through base pointer/reference:\n";
    Animal *p = &d;
    p->sound(); // Dog's sound because sound is virtual (dynamic dispatch)
    p->eat();   // Animal's eat because eat is non-virtual (static binding)

    Animal &r = d;
    r.sound(); // Dog's sound (virtual dispatch works with references too)

    return 0;
}
