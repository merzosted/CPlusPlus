#include<iostream>
using namespace std;

int main(){
    char x = 127; // maximum value for a signed char
    cout << "Initial value of x: " << (int)x << endl;
    x++; // overflow occurs here
    cout << "Value of x after overflow: " << (int)x << endl;
    return 0;
}

// Overflow is a situation where a calculation produces a result that is outside the range that can be represented with a given number of bits.
// Overflow of an integer type in C++ leads to undefined behavior for signed integers, while unsigned integers wrap around using modulo arithmetic.
// Modulo arithmetic means that when an operation exceeds the maximum value of the type, it wraps around to the minimum value and continues from there.

