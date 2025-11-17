// Inline Functions -> functions that expand in line when they are called. This can improve performance by eliminating the overhead of a function call, especially for small, frequently called functions.

class Rectangle {
private:
    double length;
    double width;
public:
    // Inline Accessors
    inline double getLength() const {};
    inline double getWidth() const {};

    // Inline Area Calculation
    inline double area() const {
        return length * width;
    }
};

double Rectangle::getLength() const {
    return length;
}
double Rectangle::getWidth() const {
    return width;
}
// Even though the getLength and getWidth functions are defined outside the class, they are still considered inline because they were declared with the 'inline' keyword inside the class definition.