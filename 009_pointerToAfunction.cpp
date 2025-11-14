// Pointer to a function in C++ allows you to achieve runtime polymorphism and callback mechanisms.
// A function pointer can store the address of a function and can be used to call the function indirectly.
// This is particularly useful in scenarios like event handling, implementing callback functions, and designing plugin architectures.
#include <iostream>
using namespace std;
// A simple function that takes two integers and returns their sum
int add(int a, int b) {
    return a + b;
} 
// A simple function that takes two integers and returns their product
int multiply(int a, int b) {
    return a * b;
}

int main() {
    // Declare a function pointer that can point to functions taking two integers and returning an integer
    int (*funcPtr)(int, int);

    // Point to the add function
    funcPtr = &add;
    cout << "Addition: " << funcPtr(5, 3) << endl; // Output: 8

    // Point to the multiply function
    funcPtr = &multiply;
    cout << "Multiplication: " << funcPtr(5, 3) << endl; // Output: 15

    return 0;
}