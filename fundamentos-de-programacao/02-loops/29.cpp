#include <iostream>

/*  29. Write a C++ program that reads an integer n >= 0 and writes
    the following message n times:

    i already know how to code XD */

int main() {
    int n;

    std::cout << "Enter an int value: ";
    std::cin >> n;

    std::cout << std::endl;

    for (int i = 1; i < n + 1; i = i + 1) {
        std::cout << i << ". \ti already know how to code XD " << std::endl;
    }
    return 0;
}
