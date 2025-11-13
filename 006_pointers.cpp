// Pointers -> A pointer is a variable that stores the memory address of another variable.
// Pointers are used for dynamic memory allocation, arrays, and functions.
// Pointers are prefixed the asterisk (*) symbol.

#include <iostream>
using namespace std;

int main() {
    int var = 42;          // Declare an integer variable
    int* ptr = &var;      // Declare a pointer and assign it the address of var

    cout << "Value of var: " << var << endl;               // Output the value of var
    cout << "Address of var: " << &var << endl;            // Output the address of var
    cout << "Value of ptr (address of var): " << ptr << endl; // Output the value of ptr (address of var)
    cout << "Value pointed to by ptr: " << *ptr << endl;   // Output the value pointed to by ptr
    // The above line dereferences the pointer to get the value at the address it points to.

    // Modifying the value of var using the pointer
    *ptr = 100;
    cout << "New value of var after modifying through ptr: " << var << endl;

    return 0;
}


// Purpose of pointers:
// 1. Dynamic Memory Management: Pointers allow for dynamic allocation and deallocation of memory using operators like new and delete. In short , they help access heap memory.
// 2. Arrays and Strings: Pointers can be used to iterate through arrays and manipulate strings efficiently.
// 3. Function Arguments: Pointers can be passed to functions to allow the function to modify the original variable's value.
// 4. Data Structures: Pointers are essential for implementing complex data structures like linked lists, trees, and graphs.    
// 5. System Resources: Pointers are used in low-level programming to interact with system resources and hardware directly.
// Note: Always ensure that pointers are initialized before use and avoid dereferencing null or uninitialized pointers to prevent undefined behavior.