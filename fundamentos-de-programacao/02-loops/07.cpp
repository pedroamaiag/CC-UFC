#include <iostream>

/*  7. Write a C++ function that receives an integer number N,
    sums all integer numbers from 1 to N, and returns the result. */

int one_to_n(int n) {
    int sum = 0;
    for (int i = 1; i < n + 1; i = i + 1) {
        sum = sum + i;
    }
    return sum;
}

int main() {
    int n;
    std::cout << "Insert an int value: ";
    std::cin >> n;

    std::cout << "The sum from 1 to " << n << " is: " << one_to_n(n) << std::endl;
    return 0;
}
