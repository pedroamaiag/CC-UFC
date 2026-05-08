#include <iostream>

/*  13. The Fibonacci number F_n, for n > 0, is defined as follows:

    F_1 = 1
    F_2 = 1
    F_n = F_(n - 1) + F_(n - 2), for n > 2

    Write a C++ function that receives an integer value n
    and calculates F_n. */

int fib(int n) {
    int fib = 1;
    int a = 1;
    int b = 1;

    for (int i = 2; i < n; i = i + 1) {
        fib = a + b;
        a = b;
        b = fib;
    }

    return fib;
}

int main() {
    int num;

    std::cout << "Insert an 'int' value: ";
    std::cin >> num;

    std::cout << "The Fibonacci of " << num << ": " << fib(num) << std::endl;

    return 0;
}
