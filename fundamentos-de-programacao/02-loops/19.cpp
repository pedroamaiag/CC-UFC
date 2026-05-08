#include <iostream>

/*  19. Create a C++ function that receives an integer value n as a parameter
    and generates n lines with exclamation marks as output.

    Example for n = 5:
    !
    ! !
    ! ! !
    ! ! ! !
    ! ! ! ! !
*/

void print(int n) {
    for (int i = 1; i < n + 1; i = i + 1) { // skip line

        for (int j = 0; j < i; j = j + 1) { // print logic
            std::cout << "! ";
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
