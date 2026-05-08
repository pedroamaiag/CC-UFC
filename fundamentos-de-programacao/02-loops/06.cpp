#include <iostream>

/*  6. Write a C++ program that reads an integer number N,
    sums all integer numbers from 1 to N, and displays the result. */

int main() {
    int sum = 0;
    int n;

    std::cout << "Insert an int value: ";
    std::cin >> n;

    for (int i = 1; i < n + 1; i = i + 1) {
        sum = i + sum;
    }

    std::cout << "Total: " << sum << std::endl;

    return 0;
}
