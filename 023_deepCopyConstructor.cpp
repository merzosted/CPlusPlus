// Problem with default copy constructor when dealing with dynamic memory allocation. Eg: When a class contains a pointer to dynamically allocated memory, the default copy constructor performs a shallow copy, which can lead to issues like double deletion or memory corruption.
// Deep Copy Constructor -> A constructor that creates a new object as a copy of an existing object, ensuring that all dynamically allocated memory is also duplicated, rather than just copying the pointer.

class Rectangle {
private:
    double* length;
    double* width;

public:
    // Deep Copy Constructor
    Rectangle(const Rectangle& rect) {
        length = new double(*(rect.length)); // Allocate new memory and copy the value
        width = new double(*(rect.width));   // Allocate new memory and copy the value
    }

};