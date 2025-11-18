// Insertion operator overloading -> The insertion operator (<<) is commonly used with output streams like std::cout.
// By overloading this operator for a user-defined class, you can define how objects of that class are printed to the output stream.
#include <iostream>

class Complex {
private:
    double real;
    double imag;   
public:
    // Parameterized Constructor
    Complex(double r, double i) {
        this->real = r;
        this->imag = i;
    };
    // Declaring friend function to overload << operator
    friend std::ostream& operator<<(std::ostream& os, const Complex& c);
    // use of reference to avoid copying and const to prevent modification of the object 
    // when passed to the function
};

// Defining friend function to overload << operator
std::ostream& operator<<(std::ostream& os, const Complex& c) {
    os << "Complex Number: " << c.real << " + " << c.imag << "i";
    return os;
}

int main() {
    Complex c1(2.5, 3.5);
    // Using overloaded << operator
    std::cout << c1 << std::endl; // Output: Complex Number: 2.5 + 3.5i
    return 0;
}