#include <iostream>

/*  13. Create a C++ function that receives an amount in reais
    to be divided among three contest winners.

    The division must follow these rules:

    - the first winner receives 46%;
    - the second winner receives 32%;
    - the third winner receives the remaining amount.

    The function must return the amount received by each winner. */

struct prize {
    double prize_one, prize_two, prize_three;
};

prize divide_prize(double t) {
    prize p;
    p.prize_one = t * 0.46;
    p.prize_two = t * 0.32;
    p.prize_three = t - p.prize_one - p.prize_two;
    return p;
}

int main() {
    double total;

    std::cout << "Enter the total prize: ";
    std::cin >> total;

    prize result = divide_prize(total);

    std::cout << "The first winner won " << result.prize_one << " reais." << std::endl;
    std::cout << "The second winner won " << result.prize_two << " reais." << std::endl;
    std::cout << "The third winner won " << result.prize_three << " reais." << std::endl;

    return 0;
}
