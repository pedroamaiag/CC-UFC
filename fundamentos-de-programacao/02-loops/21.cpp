#include <iostream>

/*  21. Write a C++ function that generates a triangle
    with height n and base 2n - 1.

    Example for n = 6:
    *
    ***
    *****
    *******
    *********
    *********** */

void print(int n) {

    for (int i = 1; i < n + 1; i = i + 1) { // skip line

        for (int j = 0; j < i * 2 - 1; j = j + 1) { // print
            std::cout << "*";
        }

        std::cout << "\n";
    }
}

int main() {
    int n;

    std::cout << "Enter an int value: ";
    std::cin >> n;

    print(n);

    return 0;
}
