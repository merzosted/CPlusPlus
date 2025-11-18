// Friend Function -> A friend function is a function that is not a member of a class but has access to its private and protected members.
// It is declared by using the keyword 'friend' inside the class.
// Friend functions are useful when you need to allow external functions to access the internal state of a class.
#include <iostream>
class Complex {
private:
    double real;
    double imag;
public:
    // Parameterized Constructor
    Complex(double r, double i);
    // Accessors
    void display() const{
        std::cout << "Complex Number: " << real << " + " << imag << "i" << std::endl;
    }
    // Declaring friend function
    friend Complex operator+(const Complex c1, const Complex c2);
};

Complex::Complex(double r, double i){
    this->real = r;
    this->imag = i;
}

// Defining friend function to overload + operator
Complex operator+(const Complex c1, const Complex c2){
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main(){
    Complex c1(2.5, 3.5);
    Complex c2(1.5, 2.5);

    // Using overloaded + operator
    Complex c3 = c1 + c2;

    c3.display(); // Output: Complex Number: 4 + 6i

    return 0;
}
