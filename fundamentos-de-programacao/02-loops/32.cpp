#include <iostream>
#include <string>

/*  32. Write a C++ program that reads a word and adds 1 to the ASCII value
    of each character in the word. Print the resulting string. */

int main() {
    std::string word;

    std::cout << "Enter a word: ";
    std::cin >> word;

    int length = word.length();

    for (int i = 0; i < length; i = i + 1) {
        word[i] = word[i] + 1;
    }
    std::cout << word << std::endl;
    return 0;
}
