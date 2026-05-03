#include <iostream>

using namespace std;

// 10. Create a C++ function that receives an angle in degrees
// and returns it converted to radians.
// R = G * pi / 180

double pi = 3.14159265358979323846;

double degrees_to_radians(double degrees){
    double radians = degrees * (pi / 180);
    return radians;
}

int main() {
    double degree;

    cout << "Enter a degree: ";
    cin >> degree;
    
    cout << "The value in radians of "<< degree <<" is: " << degrees_to_radians(degree) << endl;
    
    return 0;
}