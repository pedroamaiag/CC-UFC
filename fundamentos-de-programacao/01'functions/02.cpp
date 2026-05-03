#include <iostream>

using namespace std;

// 2. Create a C++ function that converts dollars to reais. 
// Consider the exchange rate: US$1.00 = R$5.27.

float usd_to_brl(float usd){
    return usd * 5.27;
}

int main() {
    float dollar;

    cout << "Enter an amount in dollars: ";
    cin >> dollar;

    cout << "Your amount in reais is: " << usd_to_brl(dollar) << endl;
    
    return 0;
}
