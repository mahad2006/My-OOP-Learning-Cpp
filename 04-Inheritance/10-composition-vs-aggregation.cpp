// Demonstrates Composition vs Aggregation
#include <iostream>
using namespace std;

class Engine
{
public:
    void start() { cout << "Engine started\n"; }
};

// Composition → Car *owns* Engine completely
class Car
{
private:
    Engine engine; // Engine created with Car
public:
    void startCar()
    {
        engine.start();
        cout << "Car started (Composition)\n";
    }
};

// Aggregation → University *uses* Student (Student exists independently)
class Student
{
public:
    void study() { cout << "Student studying\n"; }
};

class University
{
private:
    Student *student; // Only reference, not ownership
public:
    University(Student *s) : student(s) {}
    void startSession()
    {
        student->study();
        cout << "Session started (Aggregation)\n";
    }
};

int main()
{
    Car car;
    car.startCar();

    Student s;
    University u(&s); // Student exists outside University
    u.startSession();
    return 0;
}
