#include <iostream>
#include <cmath>

using namespace std;

// STRUCTS

struct measures{ // Q. 3
    double area, perimeter;
};

struct verify{ // Q. 4 
    int predecessor, successor;
};

struct sphere{ // Q. 6
    double volume, area;
};

struct calculations { // Q. 11
    double sum_of_squares, square_of_sum;
};

struct prize{ // Q. 13
    double prize_one, prize_two, prize_three;
};

struct digits{ // Q. 15
    int thousands, hundreds, tens, units;
};

struct time_values{ // Q. 16
    int hours, minutes, seconds;
};

struct prizes{ // Q. 18
    double return1, return2, return3;
};

struct bills{ // Q. 19
    int hundred, fifty, twenty, ten, five, two, one;
};

const double PI = 3.14159265358979323846;

// 1. Create a C++ function that receives an integer number as a parameter and returns its double.

int two_times(int n){
    return n * 2;
}

// 2. Create a C++ function that converts dollars to reais. 
// Consider the exchange rate: US$1.00 = R$5.27.

float usd_to_brl(float usd){
    return usd * 5.27;
}

// 3. Create a C++ function that receives the side measurements of a rectangle
//  and returns its area and perimeter.

measures calculate(double b, double h){
    measures calculated;
    
    calculated.area = b * h;
    calculated.perimeter = 2 * (b + h);
    
    return calculated;
}

// 4. Create a C++ function that receives an integer number and returns its predecessor and successor.

verify analysis(int n){
    verify x;
    x.predecessor = n - 1;
    x.successor = n + 1;

    return x;
}

// 5. Create a C++ function that receives the side length of a square and returns its area.

float area(float side){
    return side * side;
}

// 6. Create a C++ function to calculate the volume and surface area of a sphere,
// given the value of its radius.
// Volume: V = (4.0 / 3.0) * PI * r^3
// Surface area: A = 4 * PI * r^2

sphere calculate(double r){
    sphere sphere;
    sphere.volume = (4.0/3.0) * PI * (r * r * r);
    sphere.area = 4 * PI * (r * r);

    return sphere;
}

// 7. Create a C++ function that receives a real number and returns the square of that number.

double squared(double number){
    return number * number;
}

// 8. Create a C++ function that converts a temperature in degrees Celsius to Fahrenheit.
// F = C * (9.0 / 5.0) + 32

double celsius_to_fahrenheit(double celsius){
    double fahrenheit = celsius * (9.0 / 5.0) + 32;
    return fahrenheit;
}

// 9. Create a C++ function that receives a speed in km/h
// and returns it converted to m/s.
// M = K / 3.6

double kmh_to_ms(double speed){
    double meters_per_second = speed / 3.6;
    return meters_per_second;
}

// 10. Create a C++ function that receives an angle in degrees
// and returns it converted to radians.
// R = G * PI / 180

double degrees_to_radians(double degrees){
    double radians = degrees * (PI / 180);
    return radians;
}

// 11. Create a C++ function that receives three values and returns:
// - the sum of the squares of the three values;
// - the square of the sum of the three values.

calculations calculate(double a, double b, double c){
    calculations calculated;

    calculated.sum_of_squares = (a * a) + (b * b) + (c * c);
    calculated.square_of_sum = (a + b + c) * (a + b + c);

    return calculated;
}

// 12. Create a C++ function that receives an employee's salary
// and returns the new salary after a raise of 21.37%.

double increase_salary(double salary){
    return salary * 1.2137;
}

// 13. Create a C++ function that receives an amount in reais
// to be divided among three contest winners.
// * The first winner receives 46%.
// * The second winner receives 32%.
// * The third winner receives the remaining amount.
// * The function must return the amount received by each winner.

prize divide_prize(double t){
    prize p;
    p.prize_one   = t * 0.46;
    p.prize_two   = t * 0.32;
    p.prize_three = t - p.prize_one - p.prize_two;
    return p;
}

// 14. Create a C++ function that receives a positive three-digit integer,
// between 100 and 999, and returns another number formed by its digits
// in reverse order.
// Example: input 123, output 321.

int reverse(int three_digit_number){
    int units_digit = three_digit_number % 10;
    int tens_digit = (three_digit_number % 100) / 10;
    int hundreds_digit = three_digit_number / 100;

    int result = (units_digit * 100) + (tens_digit * 10) + (hundreds_digit);
    return result;
}

// 15. Create a C++ function that receives a four-digit integer,
// between 1000 and 9999, and returns the four separated digits,
// each one stored in a different variable.

digits separate(int four_digit_number){
    digits x;

    x.units =  four_digit_number % 10;
    x.tens  = (four_digit_number % 100)  / 10;
    x.hundreds = (four_digit_number % 1000) / 100;
    x.thousands  =  four_digit_number / 1000;

    return x;
}

// 16. Create a C++ function that receives a positive integer value in seconds
// and returns that value converted into hours, minutes, and seconds.

time_values define(int input){
    time_values x;
    
    x.hours = (input / 3600); 
    x.minutes = (input % 3600) / 60; 
    x.seconds = (input % 3600) % 60;

    return x;
}

// 17. Create a C++ function that receives the x and y coordinates of a point
// on the Cartesian plane and returns its distance from the origin (0, 0).

double distance(double x, double y){
    double result = sqrt((x * x) + (y * y));
    return result;
}

// 18. Three friends played the lottery.
// If they win, the prize must be divided proportionally to the amount
// each one invested in the bet.
// Create a C++ function that receives the amount invested by each bettor
// and the total prize amount, returning how much each one will receive.

prizes split_prize(double investment1, double investment2, double investment3, double total_prize){
    prizes x;

    double total_invested = investment1 + investment2 + investment3; 

    double percentage1 = investment1 / total_invested; 
    double percentage2 = investment2 / total_invested;
    double percentage3 = investment3 / total_invested;

    x.return1 = percentage1 * total_prize;
    x.return2 = percentage2 * total_prize;
    x.return3 = percentage3 * total_prize;
    
    return x;
}

// 19. Write a C++ function that receives the value of a withdrawal
// made by a bank customer and returns how many bills of each value
// will be necessary to complete the withdrawal using the smallest
// possible number of bills.
// Consider bills of: 100, 50, 20, 10, 5, 2, and 1.

bills exchange(int withdrawal){
    bills x;

    int current_remainder = withdrawal; 

    x.hundred = current_remainder / 100;              
    current_remainder = withdrawal - (x.hundred * 100);    


    x.fifty = current_remainder / 50;         
    current_remainder = current_remainder % 50;        
    

    x.twenty = current_remainder / 20;            
    current_remainder = current_remainder % 20;     


    x.ten = current_remainder / 10;              
    current_remainder = current_remainder % 10;        
    

    x.five = current_remainder / 5;             
    current_remainder = current_remainder % 5;       


    x.two = current_remainder / 2;               
    current_remainder = current_remainder % 2;         


    x.one = current_remainder / 1;                
    current_remainder = current_remainder % 1;        

    return x;
}