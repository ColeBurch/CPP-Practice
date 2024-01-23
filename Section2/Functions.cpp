#include <iostream>

int getValueFromUser() {
    std::cout << "Enter an integer: ";

    int input;
    std::cin >> input;

    return input;
}

int main() {
    int num1 = getValueFromUser();
    int num2 = getValueFromUser();

    std::cout << "the first number was " << num1 << "\n";
    std::cout << "the second number was " << num2 << "\n";

    return 0;
}