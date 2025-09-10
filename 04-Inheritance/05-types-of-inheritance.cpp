// 05-types-of-inheritance.cpp
// Demonstrates different types of inheritance in C++
#include <iostream>
using namespace std;

///////////////////////
// 1. SINGLE INHERITANCE
// One Base → One Derived
///////////////////////
class Person
{
protected:
    string name;

public:
    void setName(string n) { name = n; }
    void showName() { cout << "Name: " << name << endl; }
};

class Student : public Person
{
private:
    int rollNo;

public:
    void setStudent(string n, int r)
    {
        setName(n); // from base class
        rollNo = r;
    }
    void showStudent()
    {
        showName();
        cout << "Roll No: " << rollNo << endl;
    }
};

///////////////////////
// 2. MULTILEVEL INHERITANCE
// Base → Derived1 → Derived2
///////////////////////
class Vehicle
{
public:
    void vehicleType() { cout << "Vehicle: Generic\n"; }
};

class Car : public Vehicle
{
public:
    void carType() { cout << "Car: Sedan\n"; }
};

class ElectricCar : public Car
{
public:
    void batteryType() { cout << "Battery: Lithium-Ion\n"; }
};

///////////////////////
// 3. MULTIPLE INHERITANCE
// One Derived → Two Base classes
///////////////////////
class Teacher
{
public:
    void teach() { cout << "Teaching Students\n"; }
};

class Researcher
{
public:
    void research() { cout << "Doing Research\n"; }
};

class Professor : public Teacher, public Researcher
{
public:
    void role() { cout << "I am a Professor (Teacher + Researcher)\n"; }
};

///////////////////////
// 4. HIERARCHICAL INHERITANCE
// One Base → Multiple Derived classes
///////////////////////
class Shape
{
public:
    void setShape() { cout << "Setting Shape Details\n"; }
};

class Circle : public Shape
{
public:
    void drawCircle() { cout << "Drawing Circle\n"; }
};

class Rectangle : public Shape
{
public:
    void drawRectangle() { cout << "Drawing Rectangle\n"; }
};

///////////////////////
// 5. HYBRID INHERITANCE
// Combination → e.g., Multiple + Multilevel
// Student → Academics + Sports → Result
///////////////////////
class Academics
{
protected:
    int marks;

public:
    void setMarks(int m) { marks = m; }
};

class Sports
{
protected:
    int score;

public:
    void setScore(int s) { score = s; }
};

// Hybrid: Result inherits from both Academics & Sports
class Result : public Academics, public Sports
{
public:
    void showResult()
    {
        cout << "Total Marks (Academics + Sports): " << (marks + score) << endl;
    }
};

///////////////////////
// MAIN FUNCTION TO DEMO ALL TYPES
///////////////////////
int main()
{
    cout << "=== Single Inheritance ===\n";
    Student s;
    s.setStudent("Alice", 101);
    s.showStudent();

    cout << "\n=== Multilevel Inheritance ===\n";
    ElectricCar ec;
    ec.vehicleType(); // from Vehicle
    ec.carType();     // from Car
    ec.batteryType(); // from ElectricCar

    cout << "\n=== Multiple Inheritance ===\n";
    Professor p;
    p.role();
    p.teach();    // from Teacher
    p.research(); // from Researcher

    cout << "\n=== Hierarchical Inheritance ===\n";
    Circle c;
    Rectangle r;
    c.setShape();
    c.drawCircle();
    r.setShape();
    r.drawRectangle();

    cout << "\n=== Hybrid Inheritance ===\n";
    Result res;
    res.setMarks(80); // from Academics
    res.setScore(20); // from Sports
    res.showResult(); // from Result

    return 0;
}
