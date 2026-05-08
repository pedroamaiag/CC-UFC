#include <iostream>

/*  22. Write a C++ program that reads a positive integer number n
    and prints n lines of Floyd's Triangle.

    Example for n = 6:
    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15
    16 17 18 19 20 21 */

void print_floyd(int n) {
    int number = 1;

    for (int i = 0; i < n; i = i + 1) {
        for (int j = 0; j < i + 1; j = j + 1) {
            std::cout << number << " ";
            number = number + 1;
        }
        std::cout << std::endl;
    }
}
int main() {
    int n;

    std::cout << "Enter an int value: ";
    std::cin >> n;

    print_floyd(n);

    return 0;
}
