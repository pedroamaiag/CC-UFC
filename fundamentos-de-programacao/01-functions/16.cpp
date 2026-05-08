#include <iostream>

/*  16. Create a C++ function that receives a positive integer value
    in seconds and returns that value converted into:

    - hours;
    - minutes;
    - seconds. */

struct time_values {
    int hours, minutes, seconds;
};

time_values convert_seconds(int input) {
    time_values x;

    x.hours = (input / 3600);
    x.minutes = (input % 3600) / 60;
    x.seconds = (input % 3600) % 60;

    return x;
}

int main() {
    int seconds;

    std::cout << "Enter a number: ";
    std::cin >> seconds;

    time_values result = convert_seconds(seconds);

    std::cout << "Your time in hours: " << result.hours << std::endl;
    std::cout << "Your time in minutes: " << result.minutes << std::endl;
    std::cout << "Your time in seconds: " << result.seconds << std::endl;

    return 0;
}
