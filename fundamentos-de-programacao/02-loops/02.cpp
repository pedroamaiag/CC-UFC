#include <iostream>

/*  2. Write a C++ program that prints the numbers from 0 to 100000, increasing by 1000 each time.*/

int main() {
    for (int i = 0; i < 100001; i = i + 1000) {
        std::cout << i << std::endl;
    }

    return 0;
}
