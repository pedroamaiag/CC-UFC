#include <iostream>

/*  18. Write a C++ function that receives a positive integer number P
    and returns the sum of the digits of P!.

    Example:
    P = 4
    P! = 24

    Therefore:
    2 + 4 = 6 */

int ptftds(int p) { // p_to_factorial_to_digit_sum
    long long int factorial_result = 1;
    int digit;
    int sum = 0;

    for (int i = p; i > 0; i = i - 1) {
        factorial_result = (factorial_result * i);
    }

    std::cout << "\nP! = " << factorial_result << std::endl;

    while (factorial_result != 0) {
        digit = factorial_result % 10;
        sum = sum + digit;
        factorial_result = factorial_result / 10;
    }

    return sum;
}

int main() {
    int p;
    std::cout << "Enter P: ";
    std::cin >> p;

    int result = ptftds(p);
    std::cout << "Result: " << result << std::endl;
    return 0;
}
