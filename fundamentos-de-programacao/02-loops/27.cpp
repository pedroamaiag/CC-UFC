#include <cmath>
#include <iostream>

/*  27. Write a non-recursive C++ function that receives a positive integer
    number n and returns the exponential factorial of that number, defined as:

    n^(n - 1)^(n - 2)^...^1 */

double exponential_factorial(int n) {
    double result = 1;

    for (int i = 2; i < n + 1; i = i + 1) {
        result = pow(i, result);
    }
    return result;
}

int main() {
    int n;

    std::cout << "Enter an int value: " << std::endl;
    std::cin >> n;

    std::cout << "The exponential Factorial is: " << exponential_factorial(n) << std::endl;

    return 0;
}
