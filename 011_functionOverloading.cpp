// Function Overloading -> Defining multiple functions with the same name but different parameters
// In C++, function overloading allows you to create multiple functions with the same name but different parameter lists.
// The compiler differentiates these functions based on the number, types, and order of parameters.
// The return type is not considered for function overloading.

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}
#include <iostream>
using namespace std;

int main() {
    int intSum = add(5, 10);               // Calls add(int, int)
    double doubleSum = add(5.5, 10.2);    // Calls add(double, double)
    int tripleSum = add(1, 2, 3);         // Calls add(int, int, int)

    cout << "Sum of two integers: " << intSum << endl;          // Output: 15
    cout << "Sum of two doubles: " << doubleSum << endl;        // Output: 15.7
    cout << "Sum of three integers: " << tripleSum << endl;     // Output: 6

    return 0;
}