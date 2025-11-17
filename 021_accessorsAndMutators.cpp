// Accessors -> Functions that retrieve the value of private member variables
// Mutators  -> Functions that set or update the value of private member variables

class Rectangle {
private:
    double length;
    double width;
public:
    // Accessor for length
    double getLength() const {
        return length;
    }

    // Purpose of 'const' keyword: It indicates that this member function does not modify any member variables of the class.
    // It ensures that calling this function will not change the state of the object.
    
    // Mutator for length
    void setLength(double len) {
        if(len >= 0) {
            length = len;
        } else {
            length = 0; // Ensuring length is non-negative
        }
    }
    // Accessor for width
    double getWidth() const {
        return width;
    }   
    // Mutator for width
    void setWidth(double wid) {
        if(wid >= 0) {
            width = wid;
        } else {
            width = 0; // Ensuring width is non-negative
        }
    }

};

#include <iostream>
int main() {
    Rectangle rect;

    // Using mutators to set values
    rect.setLength(7.5);
    rect.setWidth(4.2);

    // Using accessors to get and display values
    std::cout << "Length: " << rect.getLength() << std::endl; // Output: Length: 7.5
    std::cout << "Width: " << rect.getWidth() << std::endl;   // Output: Width: 4.2

    return 0;
}