// Operator Overloading in C++ -> allows you to redefine the way operators work for user-defined types (classes).
// This enables objects of these classes to be manipulated using standard operators like +, -, *, etc.

class Complex {
private:
    double real;
    double imag;

public:
    // Parameterized Constructor
    Complex(double r, double i);

    // Accessors
    double getReal() const { return real; }
    double getImag() const { return imag; }
    // Overloading the + operator to add two Complex numbers
    Complex operator+(const Complex& other);
};

Complex::Complex(double r, double i) {
    this->real = r;
    this->imag = i;
}

Complex Complex::operator+(const Complex& other) {
    return Complex(this->real + other.real, this->imag + other.imag);
}

#include <iostream>
int main(){
    Complex c1(2.5, 3.5);
    Complex c2(1.5, 2.5);

    // Using overloaded + operator
    Complex c3 = c1 + c2;

    std::cout << "Result of addition: (" << c3.getReal() << ", " << c3.getImag() << "i)" << std::endl;

    return 0;
}