#include <iostream>

/*  9. Create a C++ function that receives a speed in kilometers per hour
    and returns it converted to meters per second.

    Use:
    M = K / 3.6 */

double kmh_to_ms(double speed) {
    double meters_per_second = speed / 3.6;
    return meters_per_second;
}

int main() {
    double speed;

    std::cout << "Enter a speed in km/h: ";
    std::cin >> speed;

    std::cout << "Your speed in m/s is: " << kmh_to_ms(speed) << std::endl;

    return 0;
}
