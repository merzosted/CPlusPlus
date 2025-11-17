// All Functions inside a class :
// 1. Constructors
// 2. Accessors and Mutators
// 3. Facilitator functions
// 4. Enquiry functions
// 5. Destructor

// Scope Resolution Operator (::) in C++
// The scope resolution operator (::) is used to define the member functions of a class outside the class definition.
// Benefits of using scope resolution operator:
// 1. Improved Readability: Separating function definitions from declarations makes the code cleaner and easier to read.
// 2. Better Organization: It helps in organizing code, especially for large classes with many member functions.
// 3. Reduced Compilation Time: Changes in function definitions do not require recompilation of the entire class definition, which can save time during development.
// 4. Avoiding Inline Functions: By defining functions outside the class, you can avoid making them inline by default, which can be beneficial for performance in some cases as inline functions does not work well with complex logic.

class Rectangle {
private:
    double length;
    double width;
public:
    // Constructor
    Rectangle(double len, double wid);
    // Accessors
    double getLength() const;
    double getWidth() const;
    // Mutators
    void setLength(double len);
    void setWidth(double wid);
    // Facilitator function to calculate area
    double area() const;
    // Enquiry function to check if square
    bool isSquare() const;
};

// Defining member functions outside the class using scope resolution operator
// Constructor
Rectangle::Rectangle(double len, double wid) {
    length = len;
    width = wid;
}
// Accessors
double Rectangle::getLength() const {
    return length;
}
double Rectangle::getWidth() const {
    return width;
}

// Mutators
void Rectangle::setLength(double len) {
    if(len >= 0) {
        length = len;
    } else {
        length = 0; // Ensuring length is non-negative
    }
}
void Rectangle::setWidth(double wid) {
    if(wid >= 0) {
        width = wid;
    } else {
        width = 0; // Ensuring width is non-negative
    }
}
// Facilitator function to calculate area
double Rectangle::area() const {
    return length * width;
}

// Enquiry function to check if square
bool Rectangle::isSquare() const {
    return length == width;
}

#include <iostream>
int main() {
    Rectangle rect(5.0, 3.0);

    std::cout << "Length: " << rect.getLength() << std::endl; // Output: Length: 5
    std::cout << "Width: " << rect.getWidth() << std::endl;   // Output: Width: 3
    std::cout << "Area: " << rect.area() << std::endl;         // Output: Area: 15
    std::cout << "Is Square: " << (rect.isSquare() ? "Yes" : "No") << std::endl; // Output: Is Square: No

    return 0;
}