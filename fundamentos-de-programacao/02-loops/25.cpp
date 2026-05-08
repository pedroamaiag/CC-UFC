#include <iostream>

/*  25. Write a C++ function that receives an integer n as a parameter,
    calculates, and returns the result of the following series:

    S = 2/4 + 5/5 + 10/6 + ... + (n^2 + 1)/(n + 3) */

double series(int n) {
    double sum = 0;
    double div;
    double numerator;   // numerator = (n * n) + 1;
    double denominator; // denominator = n + 3;

    for (int i = 1; i < n + 1; i = i + 1) {
        numerator = (i * i) + 1.0;
        denominator = i + 3.0;
        div = numerator / denominator;
        sum = div + sum;
    }
    return sum;
}

int main() {
    int n;
    std::cout << "Enter an int value: " << std::endl;
    std::cin >> n;

    std::cout << series(n) << std::endl;
    return 0;
}
