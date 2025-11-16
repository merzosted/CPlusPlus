// Pointer to an Object in C++
// C++ allows you to create pointers that can point to objects of a class.
// C++ uses the arrow/caps/dereferencing operator (->) to access members of an object through a pointer.
// The arrow operator is a combination of the dereference operator (*) and the dot operator (.).
// C++ allows to create objects in the heap memory using the 'new' keyword and returns a pointer to that object and also in stack memory.

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
    // Creating an object of Rectangle class in stack memory
    Rectangle rect1;
    rect1.length = 5.0;
    rect1.width = 3.0;

    // Creating a pointer to an object of Rectangle class in heap memory
    Rectangle* rectPtr = new Rectangle();
    rectPtr->length = 10.0; // Using arrow operator to access members
    rectPtr->width = 4.0;

    // Calculate and display area using stack object
    std::cout << "Area of Rectangle (stack): " << rect1.area() << std::endl; // Output: Area of Rectangle (stack): 15

    // Calculate and display area using heap object
    std::cout << "Area of Rectangle (heap): " << rectPtr->area() << std::endl; // Output: Area of Rectangle (heap): 40

    // Free the allocated memory for heap object
    delete rectPtr;

    return 0;
}
