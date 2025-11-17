// this Pointer -> points to the current object
// In C++, the 'this' pointer is an implicit parameter to all non-static member functions
// It points to the object for which the member function is called 

class Rectangle {
private:
    double length;
    double width;

public:
    // Parameterized Constructor
    Rectangle(double len, double wid) {
        this->length = len; // Using 'this' pointer to refer to the current object's member
        this->width = wid;  // Using 'this' pointer to refer to the current object's member
    }
};

#include <iostream>
int main() {
    // Creating an object of Rectangle class
    Rectangle rect(5.0, 3.0);

    return 0;
}