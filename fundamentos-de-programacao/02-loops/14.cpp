#include <iostream>

/*  14. In Mathematics, the harmonic number H(n) is defined as:

    H(n) = 1/1 + 1/2 + 1/3 + ... + 1/n

    Write a C++ function that, given a positive integer value n,
    calculates the value of H(n). */

double harmonic(int n) {
    double h = 0;

    for (int i = 1; i < n + 1; i = i + 1) {
        h = h + (1.0 / i);
    }

    return h;
}

int main() {
    int num;
    std::cout << "Insert an int value: ";
    std::cin >> num;

    std::cout << "Harmonic of " << num << ": " << harmonic(num) << std::endl;
    return 0;
}
