#include <iostream>
#include <string>

bool isPalindrome(const std::string& word, int start, int end) {
    if (start >= end) {
        return true;
    }

    if (word[start] == word[end]) {
        return isPalindrome(word, start + 1, end - 1);
    }

    return false;
}

int main() {
    // Taking input
    std::string word;
    std::cin >> word;

    // Checking if the word is a palindrome using recursion
    if (isPalindrome(word, 0, word.length() - 1)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
