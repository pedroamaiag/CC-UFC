#include <iostream>

/*  5. Create a C++ function that receives the side length of a square
    and returns its area. */

float area(float side) {
    return side * side;
}

int main() {
    float side;

    std::cout << "Enter the square side: ";
    std::cin >> side;

    std::cout << "Square area: " << area(side) << std::endl;
    return 0;
}
