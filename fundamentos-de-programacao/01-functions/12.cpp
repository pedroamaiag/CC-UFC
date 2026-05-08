#include <iostream>

/*  12. Create a C++ function that receives an employee's salary
    and returns the new salary, knowing that the employee received
    a raise of 21.37%. */

double increase_salary(double salary) {
    return salary * 1.2137;
}

int main() {
    double salary;

    std::cout << "Enter the employee salary: ";
    std::cin >> salary;

    std::cout << "The salary was: " << salary << " and now it is: " << increase_salary(salary)
              << std::endl;
    return 0;
}
