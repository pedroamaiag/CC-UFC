#include <iostream>

using namespace std;

// 4. Create a C++ function that receives an integer number and returns its predecessor and successor.

struct verify{
    int predecessor, successor;
};

verify analysis(int n){
    verify x;
    x.predecessor = n - 1;
    x.successor = n + 1;

    return x;
}

int main() {
    int number;

    cout << "Enter an integer number: ";
    cin >> number;

    verify result = analysis(number);

    cout << "The predecessor of your number is: " << result.predecessor <<
    ", and its successor is: " << result.successor << endl;
    
    return 0;
}
