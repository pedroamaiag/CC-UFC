#include <iostream>

/*  9. Write a C++ function that calculates and returns the sum
    of the first N even numbers, considering 0 as the first even number. */

int first_even(int n) {
    int s_even = 0;
    for (int i = 0; i < 2 * n; i = i + 2) {
        s_even = s_even + i;
    }
    return s_even;
}
int main() {
    int n;

    std::cout << "Insert N: ";
    std::cin >> n;

    std::cout << "Sum of first " << n << " even numbers: " << first_even(n) << std::endl;
    return 0;
}
