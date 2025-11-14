// 2. Pass by Address (Pointer)
// In this method, the address of the actual parameter is passed to the function. The function can modify the original argument using the pointer.
// This is useful when you want the function to modify the original variable or when passing large data structures to avoid copying overhead.

void swapUsingPointers(int* x, int* y) {
    int temp = *x; // Dereference pointer to get value
    *x = *y;       // Assign value at address y to address x
    *y = temp;    // Assign temp value to address y
}

// 3. Pass by Reference
// In this method, a reference (alias) to the actual parameter is passed to the function. Changes made to the parameter inside the function affect the original argument.

void swapUsingReference(int& x, int& y) {
    int temp = x; // Directly use the reference
    x = y;        // Assign value of y to x
    y = temp;    // Assign temp value to y
}

#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 20;
    // Pass by Address (Pointer) Example
    // cout << "Before swap: a = " << a << ", b = " << b << endl;
    // swapUsingPointers(&a, &b); // Pass addresses of a and b
    // cout << "After swap: a = " << a << ", b = " << b << endl;   


    // Pass by Reference Example
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    swapUsingReference(a, b); // Pass a and b by reference
    cout << "After swap: a = " << a << ", b = " << b << endl;
    return 0;
}

// Pass by Reference function can directly modify the original variables since it works with references (aliases) to those variables.
// They are called as inline functions and can lead to more efficient code by avoiding the overhead of copying large data structures.
// Avoid using loops or complex logic inside pass-by-reference functions to prevent unintended side effects on the original data.