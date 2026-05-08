#include <iostream>

/*  5. Write a C++ program that reads an integer number N
    and prints all integer numbers from 1 to N. */

int main() {
    int n;
    std::cout << "Insert an int value: ";
    std::cin >> n;

    for (int i = 1; i < n + 1; i = i + 1) {
        std::cout << i << std::endl;
    }

    return 0;
}
