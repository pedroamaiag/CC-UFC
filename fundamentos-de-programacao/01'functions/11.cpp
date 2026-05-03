#include <iostream>

using namespace std;

// 11. Create a C++ function that receives three values and returns:
// - the sum of the squares of the three values;
// - the square of the sum of the three values.

struct calculations {
    double sum_of_squares, square_of_sum;
};

calculations calculate(double a, double b, double c){
    calculations calculated;

    calculated.sum_of_squares = (a * a) + (b * b) + (c * c);
    calculated.square_of_sum = (a + b + c) * (a + b + c);

    return calculated;
}

int main() {
    
    double number_one, number_two, number_three;
    cout << "Enter the first number: " << endl;
    cin >> number_one;

    cout << "Enter the second number: " << endl;
    cin >> number_two;

    cout << "Enter the third number: " << endl;
    cin >> number_three;

    calculations result = calculate(number_one, number_two, number_three);

    cout << "Square of the sum: " << result.square_of_sum << endl;
    cout << "Sum of squares: " << result.sum_of_squares << endl;

    return 0;
}