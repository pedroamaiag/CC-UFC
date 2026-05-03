#include <iostream>
#include <cmath>

using namespace std;

// 17. Create a C++ function that receives the x and y coordinates of a point
// on the Cartesian plane and returns its distance from the origin (0, 0).

double distance(double x, double y){
    double result = sqrt((x * x) + (y * y));
    return result;
}

int main() {
    double x, y;

    cout << "Enter a value for X: ";
    cin >> x;

    cout << "Enter a value for Y: ";
    cin >> y;

    cout << "The distance is: " << distance(x,y);
    return 0;
}