#include <iostream>

/*  1. Create a C++ function that receives an integer number as a parameter
    and returns its double. */

int two_times(int n) {
    return n * 2;
}

int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    std::cout << "Your number times two is: " << two_times(number) << std::endl;

    return 0;
}
