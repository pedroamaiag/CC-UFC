#include <iostream>

/*  18. Three friends played the lottery. If they win, the prize must
    be divided proportionally to the amount each one invested in the bet.

    Create a C++ function that receives the amount invested by each bettor
    and the total prize amount, returning how much each one will receive. */

struct prizes {
    double first_bettor, second_bettor, third_bettor;
};

prizes split_prize(double investment1, double investment2, double investment3, double total_prize) {
    prizes x;

    double total_invested = investment1 + investment2 + investment3;

    double percentage1 = investment1 / total_invested;
    double percentage2 = investment2 / total_invested;
    double percentage3 = investment3 / total_invested;

    x.first_bettor = percentage1 * total_prize;
    x.second_bettor = percentage2 * total_prize;
    x.third_bettor = percentage3 * total_prize;

    return x;
}

int main() {
    double value1, value2, value3, total_prize;

    std::cout << "Enter the investment of the first winner: ";
    std::cin >> value1;

    std::cout << "Enter the investment of the second winner: ";
    std::cin >> value2;

    std::cout << "Enter the investment of the third winner: ";
    std::cin >> value3;

    std::cout << "What was the total prize? ";
    std::cin >> total_prize;

    prizes result = split_prize(value1, value2, value3, total_prize);

    std::cout << "The first bettor receives: " << result.first_bettor << std::endl;
    std::cout << "The second bettor receives: " << result.second_bettor << std::endl;
    std::cout << "The third bettor receives: " << result.third_bettor << std::endl;

    return 0;
}
