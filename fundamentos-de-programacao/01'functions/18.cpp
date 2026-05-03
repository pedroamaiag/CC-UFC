#include <iostream>

using namespace std;

// 18. Three friends played the lottery.
// If they win, the prize must be divided proportionally to the amount
// each one invested in the bet.
// Create a C++ function that receives the amount invested by each bettor
// and the total prize amount, returning how much each one will receive.

struct prizes{
    double return1, return2, return3;
};

prizes split_prize(double investment1, double investment2, double investment3, double total_prize){
    prizes x;

    double total_invested = investment1 + investment2 + investment3; 

    double percentage1 = investment1 / total_invested; 
    double percentage2 = investment2 / total_invested;
    double percentage3 = investment3 / total_invested;

    x.return1 = percentage1 * total_prize;
    x.return2 = percentage2 * total_prize;
    x.return3 = percentage3 * total_prize;
    
    return x;
}

int main() {
    double value1, value2, value3, total_prize;
    
    cout << "Enter the investment of the first winner: "; cin >> value1;

    cout << "Enter the investment of the second winner: "; cin >> value2;

    cout << "Enter the investment of the third winner: "; cin >> value3;

    cout << "What was the total prize? "; cin >> total_prize;
    
    prizes result = split_prize(value1, value2, value3, total_prize);

    cout << "The first guy won: " << result.return1 << endl;
    cout << "The second guy won: " << result.return2 << endl;
    cout << "The third guy won: " << result.return3 << endl;

    return 0;
}