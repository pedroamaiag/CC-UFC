#include <iostream>

/*  17. Write a C++ program that draws a line on the screen
    using several equal signs. The program must read how many equal signs
    will be displayed.

    Example:
    ======== */

int main() {
    int n;

    std::cout << "This program prints '='\n";
    std::cout << "How many '=' do you want? ";
    std::cin >> n;

    std::cout << std::endl;

    for (int i = 0; i < n; i = i + 1) {
        std::cout << "=";
    }

    std::cout << std::endl << std::endl;

    return 0;
}
