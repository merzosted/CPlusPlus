// Constructors in Inheritance Example in C++17
#include <iostream>

class Base{
    public:
        Base() {
            std::cout << "Base class constructor called." << std::endl;
        }
        Base(int x) {
            std::cout << "Base class parameterized constructor called with value: " << x << std::endl;
        }
};

class Derived : public Base {
    public:
        Derived() : Base() { // Calling base class default constructor
            std::cout << "Derived class constructor called." << std::endl;
        }
        Derived(int x, int y) : Base(x) { // Calling base class parameterized constructor
            std::cout << "Derived class parameterized constructor called with value: " << y << std::endl;
        }
};

int main() {
    std::cout << "Creating Derived object with default constructor:" << std::endl;
    Derived obj1;

    std::cout << "\nCreating Derived object with parameterized constructor:" << std::endl;
    Derived obj2(10, 20);

    return 0;
}