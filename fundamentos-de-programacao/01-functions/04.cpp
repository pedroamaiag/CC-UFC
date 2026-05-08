#include <iostream>

/*  4. Create a C++ function that receives an integer number and returns:

    - its predecessor;
    - its successor. */

struct verify {
    int predecessor, successor;
};

verify analysis(int n) {
    verify x;
    x.predecessor = n - 1;
    x.successor = n + 1;

    return x;
}

int main() {
    int number;

    std::cout << "Enter an integer number: ";
    std::cin >> number;

    verify result = analysis(number);

    std::cout << "The predecessor of your number is: " << result.predecessor
              << ", and its successor is: " << result.successor << std::endl;

    return 0;
}
