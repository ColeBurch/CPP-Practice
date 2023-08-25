#include <iostream>

int main()
{
    std::cout << "Enter two numbers separated by a space: ";

    int num1{};
    int num2{};
    std::cin >> num1 >> num2;

    std::cout << num1 << " + " << num2 << " is " << num1 + num2 << "\n";
    
    return 0;
}