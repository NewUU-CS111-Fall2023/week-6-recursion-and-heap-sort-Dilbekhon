#include <iostream>
#include <cmath>
#include <iomanip>

int countDigits(long long num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

long long karatsuba(long long x, long long y) {
    if (x < 10 || y < 10) {
        return x * y;
    }

    int n = std::max(countDigits(x), countDigits(y));
    int n2 = (n / 2) + (n % 2);

    long long a = x / static_cast<long long>(pow(10, n2));
    long long b = x % static_cast<long long>(pow(10, n2));
    long long c = y / static_cast<long long>(pow(10, n2));
    long long d = y % static_cast<long long>(pow(10, n2));

    long long ac = karatsuba(a, c);
    long long bd = karatsuba(b, d);
    long long ad_plus_bc = karatsuba(a + b, c + d) - ac - bd;

    return ac * static_cast<long long>(pow(10, 2 * n2)) + ad_plus_bc * static_cast<long long>(pow(10, n2)) + bd;
}

int main() {t
    long long num1, num2;
    std::cin >> num1 >> num2;

    long long result = karatsuba(num1, num2);

    std::cout << result << std::endl;

    return 0;
}
