// File: 03-template-specialization.cpp
#include <iostream>
using namespace std;

// General template
template <typename T>
class Printer
{
public:
    void print(T data)
    {
        cout << "General template: " << data << endl;
    }
};

// Specialization for char*
template <>
class Printer<char *>
{
public:
    void print(char *data)
    {
        cout << "Specialized template for char*: " << data << endl;
    }
};

int main()
{
    Printer<int> p1;
    Printer<char *> p2;
    p1.print(42);
    p2.print("Hello Template");
    return 0;
}
