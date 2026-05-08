#include <iostream>

/*  3. Write a C++ program that asks the user to enter 10 values and displays their sum. */

int main() {
    double sum = 0;
    double value;

    std::cout << "Insert ten values: " << std::endl;

    for (int i = 0; i < 10; i = i + 1) {
        std::cin >> value;
        sum += value;
    }

    std::cout << "The sum is: " << sum << std::endl;
    return 0;
}
