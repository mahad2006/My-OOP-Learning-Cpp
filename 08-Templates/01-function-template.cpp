// File: 01-function-template.cpp
#include <iostream>
using namespace std;

// Function template to find maximum of two values
template <typename T>
T getMax(T a, T b)
{
    return (a > b) ? a : b;
}
// Function template to print the passed value
template <typename T>
void printValue(const T &value)
{
    cout << value << endl;
}

// Function template to swap two values
template <typename T>
void swapValues(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

// Function template to add two values
template <typename T>
T addValues(const T &a, const T &b)
{
    return a + b;
}

// Function template to compare equality
template <typename T>
bool isEqual(const T &a, const T &b)
{
    return a == b;
}
int main()
{
    cout << "Max of 10 and 20: " << getMax(10, 20) << endl;
    cout << "Max of 5.5 and 2.3: " << getMax(5.5, 2.3) << endl;
    cout << "Max of 'A' and 'Z': " << getMax('A', 'Z') << endl;
    return 0;
}
