#include <iostream>

/*  11. Write a C++ function that receives an integer value n >= 0
    and calculates its factorial n!.

    Remember:
    0! = 1 */

int factorial(int n) {
    int result = 1;

    for (int i = n; i > 0; i = i - 1) {
        result = (result * i);
    }
    return result;
}

int main() {
    int num;

    std::cout << "Insert an 'int' value: ";
    std::cin >> num;

    std::cout << "The factorial of " << num << ": " << factorial(num) << std::endl;
    return 0;
}
