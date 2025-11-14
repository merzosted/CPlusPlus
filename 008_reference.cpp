// Reference -> It is a powerful feature specific to C++ that allows you to create an alias for another variable.
// A reference must be initialized when it is created and cannot be changed to refer to another variable later.
// References are often used for function parameters to avoid copying large objects and to allow functions to modify the original variable.
// References do not consume additional memory like pointers do, as they are simply another name for an existing variable.

#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int& ref = a; // ref is a reference to a

    cout << "Value of a: " << a << endl;       // Output: 10
    cout << "Value of ref: " << ref << endl;   // Output: 10

    ref = 20; // Modifying ref will modify a

    cout << "After modifying ref:" << endl;
    cout << "Value of a: " << a << endl;       // Output: 20
    cout << "Value of ref: " << ref << endl;   // Output: 20
    cout << (&a == &ref) << endl; // Output: 1 (true), both refer to the same memory location
    return 0;
}