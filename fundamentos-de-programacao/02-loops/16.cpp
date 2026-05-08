#include <iostream>

/*  16. Write a C++ program that calculates and prints the value of:

    S = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50 */

int main() {
    double s = 0.0;
    double numerator = 1.0;
    double denominator = 1.0;

    for (int i = 1; i < 51; i = i + 1) {
        s = s + (numerator / denominator);
        numerator = numerator + 2.0;
        denominator = denominator + 1.0;
    }

    std::cout << "S = " << s << std::endl;

    return 0;
}
