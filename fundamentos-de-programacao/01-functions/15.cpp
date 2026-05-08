#include <iostream>

/*  15. Create a C++ function that receives a four-digit integer number,
    between 1000 and 9999, and returns the four separated digits,
    each one stored in a different variable. */

struct digits {
    int thousands, hundreds, tens, units;
};

digits separate(int four_digit_number) {
    digits x;

    x.units = four_digit_number % 10;
    x.tens = (four_digit_number % 100) / 10;
    x.hundreds = (four_digit_number % 1000) / 100;
    x.thousands = four_digit_number / 1000;

    return x;
}

int main() {
    int number;

    std::cout << "Enter an integer number: ";
    std::cin >> number;

    digits result = separate(number);

    std::cout << "Your number is composed of: " << result.thousands << " " << result.hundreds << " "
              << result.tens << " " << result.units << " " << std::endl;

    return 0;
}
