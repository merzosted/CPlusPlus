// Function Templates -> Creating generic functions that work with any data type
// Function templates in C++ allow you to create a single function definition that can work with different data types.


template <class T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}

#include <iostream>
using namespace std;

int main(){

    cout<< "Max of 10 and 20 is " << getMax(10, 20) << endl;               // Works with integers
    cout<< "Max of 10.5 and 20.3 is " << getMax(10.5, 20.3) << endl;     // Works with doubles
    cout<< "Max of 'A' and 'B' is " << getMax('A', 'B') << endl;               // Works with characters

    return 0;
}