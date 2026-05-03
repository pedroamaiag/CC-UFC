#include <iostream>

using namespace std;

// 12. Create a C++ function that receives an employee's salary
// and returns the new salary after a raise of 21.37%.

double increase_salary(double salary){
    return salary * 1.2137;
}

int main() {
    double salary;

    cout << "Enter the employee salary: ";
    cin >> salary;

    cout << "The salary was: " << salary << " and now it is: " << increase_salary(salary) << endl;
    return 0;
}