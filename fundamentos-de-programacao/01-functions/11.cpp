#include <iostream>

/*  11. Create a C++ function that receives three values and returns:

    - the sum of the squares of the three values;
    - the square of the sum of the three values. */

struct calculations {
    double sum_of_squares, square_of_sum;
};

calculations calculate(double a, double b, double c) {
    calculations calculated;

    calculated.sum_of_squares = (a * a) + (b * b) + (c * c);
    calculated.square_of_sum = (a + b + c) * (a + b + c);

    return calculated;
}

int main() {

    double number_one, number_two, number_three;
    std::cout << "Enter the first number: " << std::endl;
    std::cin >> number_one;

    std::cout << "Enter the second number: " << std::endl;
    std::cin >> number_two;

    std::cout << "Enter the third number: " << std::endl;
    std::cin >> number_three;

    calculations result = calculate(number_one, number_two, number_three);

    std::cout << "Square of the sum: " << result.square_of_sum << std::endl;
    std::cout << "Sum of squares: " << result.sum_of_squares << std::endl;

    return 0;
}
