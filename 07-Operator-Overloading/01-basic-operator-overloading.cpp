/*
    01-basic-operator-overloading.cpp
    Demonstrates basic operator overloading in C++
*/

#include <iostream>

// Simple class representing a 2D point
class Point {
private:
    int x, y;

public:
    // Constructor
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    // Overload the + operator to add two Points
    Point operator+(const Point& other) const {
        return Point(x + other.x, y + other.y);
    }

    // Overload the << operator for easy printing
    friend std::ostream& operator<<(std::ostream& os, const Point& p) {
        os << "(" << p.x << ", " << p.y << ")";
        return os;
    }
};

int main() {
    Point p1(2, 3);
    Point p2(4, 5);

    // Use overloaded + operator
    Point p3 = p1 + p2;

    // Use overloaded << operator
    std::cout << "p1: " << p1 << std::endl;
    std::cout << "p2: " << p2 << std::endl;
    std::cout << "p1 + p2: " << p3 << std::endl;

    return 0;
}