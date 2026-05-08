#include <iostream>

/*  20. Write a C++ function that generates a sideways triangle
    with height 2n - 1 and width n.

    Example for n = 4:
    *
    * *
    * * *
    * * * *
    * * *
    * *
    *
*/

void print(int n) {
    for (int i = 0; i < n; i = i + 1) { // skip line

        for (int j = 0; j < i + 1; j = j + 1) { // print way and middle logic
            std::cout << "* ";
        }

        std::cout << "\n";
    }

    for (int k = n - 1; k > 0; k = k - 1) { // skip line

        for (int l = 0; l < k; l = l + 1) { // print back logic
            std::cout << "* ";
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
