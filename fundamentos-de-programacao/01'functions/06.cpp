#include <iostream>

using namespace std;

// 6. Create a C++ function to calculate the volume and surface area of a sphere,
// given the value of its radius.

// Volume: V = (4.0 / 3.0) * pi * r^3
// Surface area: A = 4 * pi * r^2

double pi = 3.14159265358979323846;

struct sphere{
    double volume, area;
};

sphere calculate(double r){
    sphere sphere;
    sphere.volume = (4.0/3.0) * pi * (r * r * r);
    sphere.area = 4 * pi * (r * r);

    return sphere;
}

int main() {
    double radius;

    cout << "Enter the value of the sphere radius: ";
    cin >> radius;
    
    sphere result = calculate(radius);

    cout << "Surface volume: " << result.volume << endl;
    cout << "Surface area: " << result.area << endl;

    return 0;
}
