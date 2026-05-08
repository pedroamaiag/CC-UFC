#include <iostream>

/*  15. Write a C++ function that, given a positive integer value N,
    calculates the value of E according to the formula:

    E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N! */

double ecalc(int n) {
    double e = 1;
    double result = 1;

    for (int i = 1; i < n + 1; i = i + 1) {
        result = (result * i);
        e = e + 1.0 / result;
    }

    return e;
}

int main() {
    int n;
    std::cout << "Insert an int value: ";
    std::cin >> n;

    std::cout << "Result for E = " << n << ": \n" << ecalc(n) << std::endl;

    return 0;
}
