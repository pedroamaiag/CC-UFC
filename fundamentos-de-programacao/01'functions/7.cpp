#include <iostream>

using namespace std;

// 7. Create a C++ function that receives a real number and returns the square of that number.

double squared(double number){
    return number * number;
}

int main() {
    double number;

    cout << "Enter a real number: ";
    cin >> number;
    
    cout << "Square of the real number: " << squared(number) << endl;
    
    return 0;
}