#include <iostream>

/*  12. Write a C++ function that receives k and n, with n >= k >= 0,
    and calculates the binomial coefficient:

    C(n, k) = n! / (k! * (n - k)!) */

int binomial_coefficient(int n, int k) {
    int c;
    int aux = n - k;
    int rn = 1;
    int rk = 1;
    int raux = 1;

    for (int i = n; i > 0; i = i - 1) {
        rn = (rn * i);
    }

    for (int j = k; j > 0; j = j - 1) {
        rk = (rk * j);
    }

    for (int l = aux; l > 0; l = l - 1) {
        raux = (raux * l);
    }

    c = rn / (rk * raux);

    return c;
}

int main() {
    int n, k;

    std::cout << "Insert a value for 'n': ";
    std::cin >> n;
    std::cout << "Insert a value for 'k': ";
    std::cin >> k;

    std::cout << "Binomial Coefficient of " << n << " and " << k
              << " is: " << binomial_coefficient(n, k) << std::endl;
    return 0;
}
