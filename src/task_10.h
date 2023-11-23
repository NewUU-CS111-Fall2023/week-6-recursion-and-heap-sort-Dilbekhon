#include <iostream>
#include <vector>
#include <algorithm>

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

std::string permuteString(const std::string& s) {
    std::vector<char> vowels;
    std::string result = s;

    for (char c : s) {
        if (isVowel(c)) {
            vowels.push_back(c);
        }
    }

    std::sort(vowels.begin(), vowels.end());

    int vowelIndex = 0;
    for (char &c : result) {
        if (isVowel(c)) {
            c = vowels[vowelIndex++];
        }
    }

    return result;
}

int main() {

    std::string input1 = "lYmpH";
    std::string input2 = "newUzbekiStanunIverSIty";

    std::cout << permuteString(input1) << std::endl;
    std::cout << permuteString(input2) << std::endl;

    return 0;
}
