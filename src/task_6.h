#include <iostream>

void findSecondLargest(int& max_num, int& second_max) {
    int num;
    std::cin >> num;

    if (num == 0) {
        max_num = second_max = 0;
        return;
    }

    findSecondLargest(max_num, second_max);

    if (num > max_num) {
        second_max = max_num;
        max_num = num;
    } else if (num > second_max) {
        second_max = num;
    }
}

int main() {
    // Variables to store the results
    int max_num, second_max;

    // Calling the function
    findSecondLargest(max_num, second_max);

    // Printing the result
    std::cout << second_max << std::endl;

    return 0;
}
