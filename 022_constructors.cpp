// Philosophy behind Constructors in C++ -> When you buy a car, it often comes with a set of default features and configurations that are set by the manufacturer. These default settings ensure that the car is ready to drive off the lot without requiring the buyer to manually set up every feature. Similarly, in C++, constructors serve as the "default settings" for objects of a class, ensuring they are properly initialized when created.
// When an object of a class is created, it is essential to initialize its data members to ensure they hold valid values. Constructors in C++ provide a systematic way to initialize objects at the time of their creation. They are special member functions that have the same name as the class and do not have a return type. Constructors can be overloaded to allow different ways of initializing objects, providing flexibility and convenience in object creation.
// When you create an object of a class, the constructor is automatically called to set up the initial state of the object. This helps prevent uninitialized data members, which can lead to undefined behavior. Constructors can also take parameters, allowing you to pass values during object creation for customized initialization.

// Default Constructor -> A constructor that takes no parameters and initializes data members to default values. Provided by the compiler if no constructor is defined.
// Non-Parameterized Constructor -> A constructor that takes no parameters but is explicitly defined by the programmer to initialize data members to specific values.
// Parameterized Constructor -> A constructor that takes parameters to initialize data members with specific values provided during object creation.
// Copy Constructor -> A constructor that creates a new object as a copy of an existing object. It takes a reference to an object of the same class as a parameter.

class Rectangle {
private:
    double length;
    double width;

public:
    // Non-Parameterized Constructor
    Rectangle() {
        length = 1.0; // Default length
        width = 1.0;  // Default width
    }
    // Parameterized Constructor
    Rectangle(double len, double wid) {
        setLength(len);
        setWidth(wid);
    }

    // Copy Constructor
    Rectangle(const Rectangle& rect) {
        length = rect.length;
        width = rect.width;
    }

    double getLength() const {
        return length;
    }
    double getWidth() const {
        return width;
    }
    void setLength(double len) {
        if(len >= 0) {
            length = len;
        } else {
            length = 0; // Ensuring length is non-negative
        }
    }
    void setWidth(double wid) {
        if(wid >= 0) {
            width = wid;
        } else {
            width = 0; // Ensuring width is non-negative
        }
    }
};

#include <iostream>
int main() {
    // Using Non-Parameterized Constructor
    Rectangle rect1;
    std::cout << "Rectangle 1 - Length: " << rect1.getLength() << ", Width: " << rect1.getWidth() << std::endl;

    // Using Parameterized Constructor
    Rectangle rect2(5.0, 3.0);
    std::cout << "Rectangle 2 - Length: " << rect2.getLength() << ", Width: " << rect2.getWidth() << std::endl;

    // Using Copy Constructor
    Rectangle rect3(rect2); // Rectangle rect3 = rect2; also works
    std::cout << "Rectangle 3 (Copy of Rectangle 2) - Length: " << rect3.getLength() << ", Width: " << rect3.getWidth() << std::endl;

    return 0;
}


// Constructor Overloading -> Defining multiple constructors with different parameter lists to allow various ways of initializing objects of a class.