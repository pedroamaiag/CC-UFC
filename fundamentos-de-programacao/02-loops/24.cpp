#include <iostream>

/*  24. Pascal's Triangle is an infinite numerical triangle formed by
    binomial numbers C(n, k), where n represents the row number and k
    represents the column number, starting the count from zero.

    Write a C++ program that reads an integer number n >= 0,
    representing the number of rows, and displays Pascal's Triangle
    with n rows.

    Example for n = 7:
    1
    1 1
    1 2 1
    1 3 3 1
    1 4 6 4 1
    1 5 10 10 5 1
    1 6 15 20 15 6 1 */

int binomial_coefficient(int n, int k) {
    int c;
    int aux = n - k;
    int rn = 1;
    int rk = 1;
    int raux = 1;

    for (int i = n; i > 0; i = i - 1) {
        rn = (rn * i);
    }

    for (int j = k; j > 0; j = j - 1) {
        rk = (rk * j);
    }

    for (int l = aux; l > 0; l = l - 1) {
        raux = (raux * l);
    }

    c = rn / (rk * raux);

    return c;
}

void print_pascal(int n) {
    for (int i = 0; i < n; i = i + 1) {
        for (int j = 0; j < i + 1; j = j + 1) {
            std::cout << binomial_coefficient(i, j) << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;

    std::cout << "Enter an int value: ";
    std::cin >> n;

    print_pascal(n);

    return 0;
}
