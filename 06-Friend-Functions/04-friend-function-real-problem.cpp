// 04-friend-function-real-problem.cpp
// Demonstrates friend functions and friend classes in a real-world scenario
#include <iostream>
#include <vector>
using namespace std;

class Statistics; // Forward declaration

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

    // Declare ResultProcessor as friend class → can access all private data
    friend class ResultProcessor;

    // Friend function to calculate average using Student + Statistics data
    friend void calculateClassAverage(const vector<Student> &students, Statistics stats);
};

class Statistics
{
private:
    int highestMarks;

public:
    Statistics(int h)
    {
        highestMarks = h;
    }

    // Friend function declaration for accessing private data of both classes
    friend void calculateClassAverage(const vector<Student> &students, Statistics stats);
};

// Friend class to process and display results
class ResultProcessor
{
public:
    void displayResults(const vector<Student> &students)
    {
        cout << "\n--- Student Results ---\n";
        for (auto &s : students)
        {
            cout << "Name: " << s.name << ", Marks: " << s.marks;
            cout << " --> " << (s.marks >= 50 ? "Pass" : "Fail") << endl;
        }
    }
};

// Friend function definition to calculate average marks using private data
void calculateClassAverage(const vector<Student> &students, Statistics stats)
{
    int total = 0;
    for (auto &s : students)
        total += s.marks;

    float average = (float)total / students.size();

    cout << "\nClass Average: " << average << endl;
    cout << "Highest Marks Recorded: " << stats.highestMarks << endl;
}

int main()
{
    // Creating student objects
    vector<Student> students = {
        Student("Alice", 85),
        Student("Bob", 40),
        Student("Charlie", 70)};

    // Statistics object (highest marks in the class)
    Statistics stats(85);

    // Process & display results using friend class
    ResultProcessor rp;
    rp.displayResults(students);

    // Calculate class average using friend function
    calculateClassAverage(students, stats);

    return 0;
}
