#include <iostream>

/*  3. Create a C++ function that receives the side measurements
    of a rectangle and returns:

    - the area;
    - the perimeter. */

struct measures {
    double area, perimeter;
};

measures calculate(double b, double h) {
    measures calculated;

    calculated.area = b * h;
    calculated.perimeter = 2 * (b + h);

    return calculated;
}

int main() {
    double base, height;

    std::cout << "Enter the rectangle base: ";
    std::cin >> base;

    std::cout << "Enter the rectangle height: ";
    std::cin >> height;

    measures result = calculate(base, height);

    std::cout << "Rectangle area: " << result.area << std::endl;
    std::cout << "Rectangle perimeter: " << result.perimeter << std::endl;

    return 0;
}
