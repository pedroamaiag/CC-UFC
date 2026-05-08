#include <iostream>

/*  28. Write a C++ program that prints the following message on the screen
    10 times:

    COMPUTER SCIENCE IS AWESOME! */

int main() {
    std::cout << std::endl;

    for (int i = 1; i < 11; i = i + 1) {
        std::cout << i << ". \tCOMPUTER SCIENCE IS AWESOME!" << std::endl;
    }
    std::cout << std::endl;

    return 0;
}
