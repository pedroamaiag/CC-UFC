#include <iostream>

/*  7. Create a C++ function that receives a real number
    and returns the square of that number. */

double squared(double number) {
    return number * number;
}

int main() {
    double number;

    std::cout << "Enter a real number: ";
    std::cin >> number;

    std::cout << "Square of the real number: " << squared(number) << std::endl;

    return 0;
}
