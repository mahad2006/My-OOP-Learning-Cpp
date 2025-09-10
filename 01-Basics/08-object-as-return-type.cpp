// File: 01-Basics/08-object-as-return-type.cpp
// Demonstrates returning objects from functions in C++
#include <iostream>
#include <string>

using namespace std;

// A simple class representing a Book
class Book
{
private:
    string title;
    string author;
    int year;

public:
    // Constructor to initialize Book object
    Book(const string &t, const string &a, int y)
        : title(t), author(a), year(y) {}

    // Function to display book details
    void display() const
    {
        cout << "Title: " << title << "\n"
             << "Author: " << author << "\n"
             << "Year: " << year << endl;
    }
};

// Function that returns a Book object
Book createBook()
{
    string title, author;
    int year;

    // Get book details from user
    cout << "Enter book title: ";
    getline(cin, title);

    cout << "Enter author name: ";
    getline(cin, author);

    cout << "Enter publication year: ";
    cin >> year;

    // Return a Book object (object as return type)
    return Book(title, author, year);
}

int main()
{
    // Call function that returns a Book object
    Book myBook = createBook();

    cout << "\nBook details entered:\n";
    myBook.display();

    return 0;
}