#include <iostream>

void printNumbersRecursive(int a, int b) {
    if (a == b) {
        std::cout << a << " ";
    } else if (a < b) {
        std::cout << a << " ";
        printNumbersRecursive(a + 1, b);
    } else {
        std::cout << a << " ";
        printNumbersRecursive(a - 1, b);
    }
}

int main() {
    // Taking input
    int A, B;
    std::cin >> A >> B;

    // Printing numbers using recursion
    printNumbersRecursive(A, B);

    return 0;
}
