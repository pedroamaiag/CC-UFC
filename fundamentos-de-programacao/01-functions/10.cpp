#include <iostream>

/*  10. Create a C++ function that receives an angle in degrees
    and returns it converted to radians.

    Use:
    R = G * pi / 180 */

double pi = 3.14159265358979323846;

double degrees_to_radians(double degrees) {
    double radians = degrees * (pi / 180);
    return radians;
}

int main() {
    double degree;

    std::cout << "Enter a degree: ";
    std::cin >> degree;

    std::cout << "The value in radians of " << degree << " is: " << degrees_to_radians(degree)
              << std::endl;

    return 0;
}
