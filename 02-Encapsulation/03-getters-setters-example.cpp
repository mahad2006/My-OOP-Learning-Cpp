/*
    02-getters-setters-example.cpp
    Example demonstrating the use of getters and setters in C++
    Getters and setters are public methods that provide controlled access to private member variables.
*/
#include <iostream>
#include <string>
using namespace std;

// A simple class demonstrating encapsulation using getters and setters
class Person
{
private:
    string name; // Private member variable
    int age;     // Private member variable

public:
    // Constructor
    Person(const string &name, int age)
    {
        setName(name);
        setAge(age);
    }

    // Getter for name
    string getName() const
    {
        return name;
    }

    // Setter for name
    void setName(const string &newName)
    {
        if (!newName.empty())
        {
            name = newName;
        }
        else
        {
            name = "Unknown";
        }
    }

    // Getter for age
    int getAge() const
    {
        return age;
    }

    // Setter for age
    void setAge(int newAge)
    {
        if (newAge >= 0)
        {
            age = newAge;
        }
        else
        {
            age = 0; // Default to 0 if invalid age
        }
    }
};

int main()
{
    // Create a Person object
    Person person("Alice", 25);

    // Access and modify data using getters and setters
    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;

    // Update name and age
    person.setName("Bob");
    person.setAge(30);

    cout << "Updated Name: " << person.getName() << endl;
    cout << "Updated Age: " << person.getAge() << endl;

    return 0;
}

