// Heap memory allocation using pointers in C++

#include <iostream>
using namespace std;

int main() {
    // Dynamically allocate an integer on the heap
    int* heapVar = new int; // 'new' allocates memory on the heap
    *heapVar = 55;          // Assign a value to the allocated memory

    cout << "Value of heapVar: " << *heapVar << endl; // Output the value stored in heap memory
    cout << "Address of heapVar: " << heapVar << endl; // Output the address of the allocated memory

    // Dynamically allocate an array of integers on the heap
    int size = 5;
    int* heapArray = new int[size]; // Allocate an array of 5 integers

    // Initialize and output the array elements
    for (int i = 0; i < size; ++i) {
        heapArray[i] = i * 10; // Assign values to the array
        cout << "heapArray[" << i << "] = " << heapArray[i] << endl; // Output each element
    }

    // Deallocate the memory to prevent memory leaks
    delete heapVar;          // Free the single integer
    delete[] heapArray;     // Free the array

    // Note: Always pair 'new' with 'delete' and 'new[]' with 'delete[]' to avoid memory leaks.
    // Do not assign the heap pointer a null value before deleting it, as this will lead to undefined behavior. As the pointer is already pointing to a memory location in the heap.

    return 0;
}