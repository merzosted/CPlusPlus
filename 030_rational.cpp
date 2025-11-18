// Rational Number Class Implementation

#include <iostream>

class Rational {
private:
    int numerator;
    int denominator;

public:
    // Parameterized Constructor
    Rational(int num, int denom) {
        if (denom == 0) {
            throw std::invalid_argument("Denominator cannot be zero.");
        }
        this->numerator = num;
        this->denominator = denom;
    }

    // + OPERATOR OVERLOADING
    Rational operator+(const Rational& other) const {
        int commonDenom = this->denominator * other.denominator;
        int newNumerator = (this->numerator * other.denominator) + (other.numerator * this->denominator);
        return Rational(newNumerator, commonDenom);
    }
    // Declaring friend function to overload << operator
    friend std::ostream& operator<<(std::ostream& os, const Rational& r);
};

std::ostream& operator<<(std::ostream& os, const Rational& r) {
    os << r.numerator << "/" << r.denominator;
    return os;
}

int main(){
    Rational r1(1, 2); // 1/2
    Rational r2(3, 4); // 3/4

    Rational r3 = r1 + r2; // Using overloaded + operator
    std::cout << "Sum: " << r3 << std::endl; // Using overloaded << operator
}