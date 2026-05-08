#include <iostream>

/*  23. Write a C++ program to display the multiplication tables from 1 to 9. */

int main() {
    int result;

    for (int i = 1; i < 10; i = i + 1) {

        for (int j = 1; j < 11; j = j + 1) {
            result = i * j;
            std::cout << i << " x " << j << " = " << result << std::endl;
        }
        std::cout << std::endl;
    }

    return 0;
}
