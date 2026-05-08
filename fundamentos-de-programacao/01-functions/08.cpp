#include <iostream>

/*  8. Create a C++ function that converts a temperature
    in degrees Celsius to Fahrenheit.

    Use:
    F = C * (9.0 / 5.0) + 32 */

double celsius_to_fahrenheit(double celsius) {
    double fahrenheit = celsius * (9.0 / 5.0) + 32;
    return fahrenheit;
}

int main() {
    double celsius;

    std::cout << "Enter a temperature in Celsius degrees: ";
    std::cin >> celsius;

    std::cout << "Your temperature in Fahrenheit is: " << celsius_to_fahrenheit(celsius)
              << std::endl;

    return 0;
}
