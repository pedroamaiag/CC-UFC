#include <iostream>

using namespace std;

// 16. Create a C++ function that receives a positive integer value in seconds
// and returns that value converted into hours, minutes, and seconds.

struct time_values{
    int hours, minutes, seconds;
};

time_values define(int input){
    time_values x;
    
    x.hours = (input / 3600); 
    x.minutes = (input % 3600) / 60; 
    x.seconds = (input % 3600) % 60;

    return x;
}

int main() {
    int seconds;

    cout << "Enter a number: ";
    cin >> seconds;

    time_values result = define(seconds);

    cout << "Your time in hours: " << result.hours << endl;
    cout << "Your time in minutes: " << result.minutes << endl;
    cout << "Your time in seconds: " << result.seconds << endl;

    return 0;
}