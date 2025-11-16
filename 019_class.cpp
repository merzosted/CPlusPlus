// Class -> a user-defined data type that represents a blueprint for objects
// It encapsulates data for the object and methods to manipulate that data.
// By Default, all members of a class are private unless specified otherwise.

class Rectangle {
public:
    // Data members
    double length;
    double width;

    // Member function to calculate area
    double area() {
        return length * width;
    }
};

#include <iostream>
int main() {
    // Create an object of Rectangle class
    Rectangle rect;
    rect.length = 5.0;
    rect.width = 3.0;

    // Calculate and display area
    std::cout << "Area of Rectangle: " << rect.area() << std::endl; // Output: Area of Rectangle: 15
    return 0;
}