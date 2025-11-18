// Inheritance -> Inheritance allows a class (derived class) to inherit attributes and methods from another class (base class).

#include <iostream>

class Base {
    private:
        int privateVar;
    public:
        int publicVar;
        void display() {
            std::cout << "Base class display function called." << std::endl;
        }
};

class Derived : public Base {
    public:
        void show() {
            // privateVar = 10; // Error: privateVar is not accessible
            publicVar = 20; // Accessible
            std::cout << "Derived class show function called." << std::endl;
            display(); // Calling base class method
        }
};

int main() {
    Derived obj;
    obj.show();
    std::cout << "Public variable from Base class: " << obj.publicVar << std::endl;
    return 0;
}