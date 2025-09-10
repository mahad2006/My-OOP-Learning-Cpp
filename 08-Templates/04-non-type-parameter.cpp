// File: 04-non-type-parameter.cpp
#include <iostream>
using namespace std;

// Non-type template parameter for array size
template <typename T, int size>
class Array
{
    T arr[size];

public:
    void set(int index, T value)
    {
        arr[index] = value;
    }
    void display()
    {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main()
{
    Array<int, 5> a;
    for (int i = 0; i < 5; i++)
        a.set(i, i + 1);
    a.display();
    return 0;
}
