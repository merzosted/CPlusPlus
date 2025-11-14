// Functions in C++ are blocks of code that perform specific tasks and can be reused throughout a program.
// They help in organizing code, improving readability, and reducing redundancy.
// Functions can take parameters, return values, and support features like default arguments and function overloading.
// When a function ends, the activation record (or stack frame) is removed from the call stack, and control is returned to the calling function.
// If a function has allocated memory dynamically, it is the programmer's responsibility to free that memory before the function ends to avoid memory leaks.

// Reusable function to get the max of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
}

#include <iostream>
using namespace std;

int main(){
    int num1 = 10, num2 = 20;
    cout << "Max of " << num1 << " and " << num2 << " is " << max(num1, num2) << endl;
    return 0;
}
