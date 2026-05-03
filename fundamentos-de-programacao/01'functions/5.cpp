#include <iostream>

using namespace std;

// 5. Create a C++ function that receives the side length of a square and returns its area.

float area(float side){
    return side * side;
}

int main() {
    float side;

    cout << "Enter the square side: ";
    cin >> side;
    
    cout << "Square area: " << area(side) << endl;
    return 0;
}