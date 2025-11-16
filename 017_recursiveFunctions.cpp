// Recursive Funtion -> A function that calls itself in order to solve a problem.
// It typically has a base case to terminate the recursion and a recursive case to continue the recursion.

#include <iostream>

// Recursive function to calculate factorial of a number
int factorial(int n) {
    // Base case
    if (n <= 1) {
        return 1;
    }
    // Recursive case
    return n * factorial(n - 1);
}

int main() {
    int number = 5;
    std::cout << "Factorial of " << number << " is " << factorial(number) << std::endl; // Output: Factorial of 5 is 120
    return 0;
}