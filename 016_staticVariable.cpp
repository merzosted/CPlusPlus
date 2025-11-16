// Static Variable -> A static variable inside a function retains its value between function calls.
// It is initialized only once, and its lifetime extends across the entire run of the program.
// It can only be accessed within the function it is defined in.

#include <iostream>
void counterFunction() {
    static int counter = 0; // Static variable
    counter++;
    std::cout << "Counter value: " << counter << std::endl;
}

int main() {
    counterFunction(); // Output: Counter value: 1
    counterFunction(); // Output: Counter value: 2
    counterFunction(); // Output: Counter value: 3
    return 0;
}