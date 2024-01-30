#include <iostream>

int accumulate(int number) {
    static int sum;
    sum += number;
    return sum;
}

int main() {
    std::cout << accumulate(4) << "\n";
    std::cout << accumulate(3) << "\n";
    std::cout << accumulate(2) << "\n";
    std::cout << accumulate(1) << "\n";

    return 0;
}