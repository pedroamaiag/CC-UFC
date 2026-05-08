#include <cmath>
#include <iostream>

/*  26. Write a C++ function that receives as parameters the angle x,
    in radians, and a positive integer value n. Calculate the sine of this
    angle using the Taylor series:

    sin(x) = x - x^3/3! + x^5/5! - ... + (-1)^n * x^(2n + 1)/(2n + 1)! */

double factorial(int arg) {
    double result = 1;

    for (int i = arg; i > 0; i = i - 1) {
        result = result * i;
    }

    return result;
}

double taylor_series(double x, int n) {
    double sinx = 0;

    for (int i = 0; i <= n; i = i + 1) {
        double numerator = pow(x, (2 * i) + 1);
        double denominator = factorial((2 * i) + 1);
        sinx = sinx + pow(-1, i) * numerator / denominator;
    }

    return sinx;
}

int main() {
    int n;
    double x;

    std::cout << "Enter an int value: ";
    std::cin >> n;

    std::cout << "Enter an angle in radians: ";
    std::cin >> x;

    std::cout << "The sine of your angle, calculated by the Taylor Series is: "
              << taylor_series(x, n) << std::endl;

    return 0;
}
