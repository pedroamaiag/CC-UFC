#include <iostream>
#include <string>

/*  31. Implement a C++ program that reads two strings, str1 and str2,
    and a positive integer value N. Concatenate str2 to the end of str1
    N times. */

int main() {
    int n;
    std::string str1, str2;

    std::cout << "Type a word: ";
    std::cin >> str1;

    std::cout << "Type another word: ";
    std::cin >> str2;

    std::cout << "Now, insert a value: ";
    std::cin >> n;

    for (int i = 0; i < n; i = i + 1) {
        str1 = str1 + str2;
    }

    std::cout << str1;
    std::cout << std::endl;

    return 0;
}
