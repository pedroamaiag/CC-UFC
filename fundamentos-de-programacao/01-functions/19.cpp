#include <iostream>

/*  19. Create a C++ function that receives the value of a withdrawal
    made by a bank customer and returns how many bills of each value
    will be necessary to complete the withdrawal using the smallest
    possible number of bills.

    Consider bills of:
    100, 50, 20, 10, 5, 2, 1 */

struct bills {
    int hundred, fifty, twenty, ten, five, two, one;
};

bills exchange(int withdrawal) {
    bills x;

    int current_remainder = withdrawal;

    x.hundred = current_remainder / 100;
    current_remainder = withdrawal - (x.hundred * 100);

    x.fifty = current_remainder / 50;
    current_remainder = current_remainder % 50;

    x.twenty = current_remainder / 20;
    current_remainder = current_remainder % 20;

    x.ten = current_remainder / 10;
    current_remainder = current_remainder % 10;

    x.five = current_remainder / 5;
    current_remainder = current_remainder % 5;

    x.two = current_remainder / 2;
    current_remainder = current_remainder % 2;

    x.one = current_remainder / 1;
    current_remainder = current_remainder % 1;

    return x;
}

int main() {
    int withdrawal;

    std::cout << "Enter the withdrawal amount: ";
    std::cin >> withdrawal;

    bills result = exchange(withdrawal);

    std::cout << result.hundred << " bills of 100 reais were withdrawn" << std::endl;
    std::cout << result.fifty << " bills of 50 reais were withdrawn" << std::endl;
    std::cout << result.twenty << " bills of 20 reais were withdrawn" << std::endl;
    std::cout << result.ten << " bills of 10 reais were withdrawn" << std::endl;
    std::cout << result.five << " bills of 5 reais were withdrawn" << std::endl;
    std::cout << result.two << " bills of 2 reais were withdrawn" << std::endl;
    std::cout << result.one << " bills of 1 real were withdrawn" << std::endl;

    return 0;
}
