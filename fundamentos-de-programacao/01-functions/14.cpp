#include <iostream>

/*  14. Create a C++ function that receives a positive three-digit integer
    number, between 100 and 999, and returns another number formed by
    its digits in reverse order.

    Example:
    Input: 123
    Output: 321 */

int reverse_number(int three_digit_number) {
    int units_digit = three_digit_number % 10;
    int tens_digit = (three_digit_number % 100) / 10;
    int hundreds_digit = three_digit_number / 100;

    int result = (units_digit * 100) + (tens_digit * 10) + (hundreds_digit);
    return result;
}

int main() {
    int number;

    std::cout << "Enter an integer number: ";
    std::cin >> number;

    std::cout << "Your reversed number is: " << reverse_number(number) << std::endl;
    return 0;
}
