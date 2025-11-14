// Parameter Passing Methods in C++
//  1. Pass by Value: A copy of the actual parameter is passed to the function. Changes made to the parameter inside the function do not affect the original argument.
//  2. Pass by Reference: A reference (alias) to the actual parameter is passed to the function. Changes made to the parameter inside the function affect the original argument.
//  3. Pass by Pointer: The address of the actual parameter is passed to the function. The function can modify the original argument using the pointer. 

// Pass by Value Example

int addTenToSum(int x, int y) {
    x = x + 10; // Modifying local copy
    return x + y;
}

#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 15;

    cout << "Before function call: a = " << a << ", b = " << b << endl;

    int result = addTenToSum(a, b);

    cout << "Result from function: " << result << endl; // Should print 30 (15 + 10 + 5)
    cout << "After function call: a = " << a << ", b = " << b << endl; // a and b remain unchanged

    return 0;
}

// Pass by value means that the function works with copies of the arguments, so any modifications made to the parameters inside the function do not affect the original variables in the calling function.