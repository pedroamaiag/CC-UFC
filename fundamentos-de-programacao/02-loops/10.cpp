#include <iostream>

/*  10. Write a C++ function that receives an integer x and
    a non-negative integer n. Using a loop, calculate x^n
    and return the result. */

int power(int x, int n) {
    int store_value = 1;
    for (int i = 1; i < n + 1; i = i + 1) {
        store_value = store_value * x;
    }
    return store_value;
}
int main() {
    int x, n;

    std::cout << "Insert X: ";
    std::cin >> x;

    std::cout << "Insert N: ";
    std::cin >> n;

    std::cout << "x^n: " << x << "^" << n << " -> x^n: " << power(x, n) << std::endl;

    return 0;
}
