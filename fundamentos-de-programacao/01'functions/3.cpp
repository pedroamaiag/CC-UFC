#include <iostream>

using namespace std;

// 3. Create a C++ function that receives the side measurements of a rectangle
//  and returns its area and perimeter.

struct measures{
    double area, perimeter;
};

measures calculate(double b, double h){
    measures calculated;
    
    calculated.area = b * h;
    calculated.perimeter = 2 * (b + h);
    
    return calculated;
}

int main() {
    double base, height;

    cout << "Enter the rectangle base: ";
    cin >> base;

    cout << "Enter the rectangle height: ";
    cin >> height;
    
    measures result = calculate(base, height);

    cout << "Rectangle area: " << result.area << endl;
    cout << "Rectangle perimeter: " << result.perimeter << endl;

    return 0;
}