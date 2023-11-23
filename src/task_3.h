#include <iostream>

int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n % 10 + sumOfDigits(n / 10);
    }
}

int main() {
    // Taking input
    int N;
    std::cin >> N;

    // Calculating the sum of digits using recursion
    int result = sumOfDigits(N);

    // Printing the result
    std::cout << result << std::endl;

    return 0;
}
