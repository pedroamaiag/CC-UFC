#include <iostream>
#include <string>

/*  30. Write a C++ program that receives a word and prints it backwards. */

std::string backwards_print(std::string word) {
    std::string backwards_word;

    for (int i = word.length() - 1; i >= 0; i = i - 1) {
        backwards_word = backwards_word + word[i];
    }

    return backwards_word;
}

int main() {
    std::string word;

    std::cout << "Write a word: ";
    std::cin >> word;

    std::cout << "Your word backwards is: " << backwards_print(word) << std::endl;

    return 0;
}
