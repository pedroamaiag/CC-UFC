#include <cmath>
#include <iostream>

/*  17. Create a C++ function that receives the x and y coordinates
    of a point on the Cartesian plane and returns its distance
    from the origin (0, 0). */

double distance_from_origin(double x, double y) {
    double result = sqrt((x * x) + (y * y));
    return result;
}

int main() {
    double x, y;

    std::cout << "Enter a value for X: ";
    std::cin >> x;

    std::cout << "Enter a value for Y: ";
    std::cin >> y;

    std::cout << "The distance is: " << distance_from_origin(x, y) << std::endl;
    return 0;
}
