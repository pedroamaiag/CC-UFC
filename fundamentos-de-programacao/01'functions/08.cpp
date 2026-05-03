#include <iostream>

using namespace std;

// 8. Create a C++ function that converts a temperature in degrees Celsius to Fahrenheit.
// F = C * (9.0 / 5.0) + 32

double celsius_to_fahrenheit(double celsius){
    double fahrenheit = celsius * (9.0 / 5.0) + 32;
    return fahrenheit;
}

int main() {
    double celsius;

    cout << "Enter a temperature in Celsius degrees: ";
    cin >> celsius;
    
    cout << "Your temperature in Fahrenheit is: " << celsius_to_fahrenheit(celsius) << endl; 
    
    return 0;
}
