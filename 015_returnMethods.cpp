// Return Methods of Functions in C++
// In C++, functions can return values using different methods:
// 1. Return by Value: The function returns a copy of the value. Changes made to the returned value do not affect the original variable.
// 2. Return by Reference: The function returns a reference (alias) to the original variable. Changes made to the returned reference affect the original variable.
// 3. Return by Pointer: The function returns a pointer to the original variable. Changes made through the pointer affect the original variable.


// Return by Address (Pointer)

int* fun(int size){
    int* arr = new int[size]; // Dynamically allocate an array
    for(int i = 0; i < size; i++){
        arr[i] = i + 1; // Initialize array elements
    }
    return arr; // Return pointer to the array
} 

#include <iostream>
using namespace std;

int main(){
    int* myArray = fun(5); // Call function and get pointer to array
    cout << "Array elements: ";
    for(int i = 0; i < 5; i++){
        cout << myArray[i] << " "; // Access array elements using pointer
    }
    cout << endl;
    delete[] myArray; // Free dynamically allocated memory  
    return 0;
}


// Return by Reference

/*
int& getElement(int arr[], int index) {
    return arr[index]; // Return reference to the array element
}
#include <iostream>
using namespace std;    
int main() {
    int myArray[5] = {10, 20, 30, 40, 50};
    cout << "Original element at index 2: " << getElement(myArray, 2) << endl; // Output: 30

    getElement(myArray, 2) = 100; // Modify the element through the reference

    cout << "Modified element at index 2: " << myArray[2] << endl; // Output: 100
    return 0;
}
*/