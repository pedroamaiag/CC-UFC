#include <iostream>

using namespace std;

// 1. Create a C++ function that receives an integer number as a parameter and returns its double.

int two_times(int n){
    return n * 2;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;
    
    cout << "Your number times two is: " << two_times(number) << endl;
    
    return 0;
}
