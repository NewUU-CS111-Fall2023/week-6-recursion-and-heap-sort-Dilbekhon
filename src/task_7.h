#include <iostream>

int reverseNumber(int n, int reversed) {
    if (n == 0) {
        return reversed;
    } else {
        int lastDigit = n % 10;
        reversed = reversed * 10 + lastDigit;
        return reverseNumber(n / 10, reversed);
    }
}

int main() {
    // Taking input
    int n;
    std::cin >> n;

    // Reversing the digits using recursion
    int reversedNumber = reverseNumber(n, 0);

    // Printing the reversed number
    std::cout << reversedNumber << std::endl;

    return 0;
}
