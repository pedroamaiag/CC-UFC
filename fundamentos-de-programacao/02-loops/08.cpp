#include <iostream>

/*  8. Write a C++ program that reads an integer number N
    and prints the first N odd natural numbers. */

int main() {
    int n;
    int expression = 0;
    std::cout << "Insert an int value: ";
    std::cin >> n;

    for (int i = 0; i < n; i = i + 1) {
        expression = (2 * i) + 1;
        std::cout << "Odd numbers: " << expression << std::endl;
    }
    return 0;
}
