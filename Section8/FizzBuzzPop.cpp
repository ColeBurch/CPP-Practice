#include <iostream>

int main() {
    std::cout << "How many iterations? ";
    int iterations;
    std::cin >> iterations;

    for (int i = 1; i <= iterations; ++i) {
        if (i % 3 == 0) {
            std::cout << "fizz";
        }
        if (i % 5 == 0) {
            std::cout << "buzz";
        }
        if (i % 7 == 0) {
            std::cout << "pop";
        } 
        if (i % 3 != 0 && i % 5 != 0 && i % 7 != 0) {
            std::cout << i;
        }
        std::cout << "\n";
    }

    return 0;
}