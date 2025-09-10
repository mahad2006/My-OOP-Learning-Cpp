// File: 02-class-template.cpp
#include <iostream>
using namespace std;

// Class template for a simple Pair
template <typename T1, typename T2>
class Pair
{
    T1 first;
    T2 second;

public:
    Pair(T1 a, T2 b) : first(a), second(b) {}
    void display()
    {
        cout << "First: " << first << ", Second: " << second << endl;
    }
};

int main()
{
    Pair<int, double> p1(10, 20.5);
    Pair<string, int> p2("Hello", 100);
    p1.display();
    p2.display();
    return 0;
}
