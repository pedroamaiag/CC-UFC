#include <iostream>

/*  4. Write a C++ program that reads 10 integer numbers and prints their average. */

int main() {
    int sum = 0;
    int value;

    std::cout << "Insert ten int values: " << std::endl;

    for (int i = 0; i < 10; i = i + 1) {
        std::cin >> value;
        sum += value;
    }
    double avg = sum / 10.0;

    std::cout << "The mean is: " << avg << std::endl;
    return 0;
}
