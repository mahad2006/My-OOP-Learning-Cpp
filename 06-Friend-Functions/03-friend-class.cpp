// 03-friend-class.cpp
// Demonstrates usage of friend classes in C++
#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int marks;

public:
    Student(string n, int m)
    {
        name = n;
        marks = m;
    }

    // Making ResultProcessor a friend class → can access all private data
    friend class ResultProcessor;
};

class ResultProcessor
{
public:
    void displayResult(Student s)
    {
        // Friend class can access private data directly
        cout << "Student: " << s.name << ", Marks: " << s.marks << endl;
        if (s.marks >= 50)
            cout << "Status: Pass\n";
        else
            cout << "Status: Fail\n";
    }
};

int main()
{
    Student s1("Alice", 85);
    Student s2("Bob", 40);

    ResultProcessor rp;
    rp.displayResult(s1);
    rp.displayResult(s2);

    return 0;
}
