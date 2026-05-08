#include <iostream>

/*  6. Create a C++ function that receives the radius of a sphere and returns:

    - the volume;
    - the surface area.

    Use:
    V = (4 / 3) * pi * r^3
    A = 4 * pi * r^2 */

double pi = 3.14159265358979323846;

struct sphere {
    double volume, area;
};

sphere calculate(double r) {
    sphere result;
    result.volume = (4.0 / 3.0) * pi * (r * r * r);
    result.area = 4 * pi * (r * r);

    return result;
}

int main() {
    double radius;

    std::cout << "Enter the value of the sphere radius: ";
    std::cin >> radius;

    sphere result = calculate(radius);

    std::cout << "Sphere volume: " << result.volume << std::endl;
    std::cout << "Sphere surface area: " << result.area << std::endl;

    return 0;
}
