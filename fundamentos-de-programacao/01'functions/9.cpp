#include <iostream>

using namespace std;

// 9. Create a C++ function that receives a speed in km/h
// and returns it converted to m/s.
// M = K / 3.6

double kmh_to_ms(double speed){
    double meters_per_second = speed / 3.6;
    return meters_per_second;
}

int main() {
    double speed;

    cout << "Enter a speed in km/h: ";
    cin >> speed;
    
    cout << "Your speed in m/s is: " << kmh_to_ms(speed) << endl;
    
    return 0;
}