#include <iostream>
#include <cmath>

bool isPrime(int n, int i = 2) {
    if (n <= 2) {
        return (n == 2);
    }

    if (i <= sqrt(n)) {
        if (n % i == 0) {
            return false; // It's composite
        }
        return isPrime(n, i + 1);
    }

    return true; // It's prime
}

int main() {
    // Taking input
    int n;
    std::cin >> n;

    // Checking if n is prime using recursion
    if (isPrime(n)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
