#include <iostream>

int main() {
    int firstNumber, secondNumber;

    std::cout << "Enter the first number: ";
    std::cin >> firstNumber;

    std::cout << "Enter the second number: ";
    std::cin >> secondNumber;

    if (firstNumber < secondNumber) {
        std::cout << "The first number " << firstNumber << " is less than the second number " << secondNumber << "." << std::endl;
    } else if (firstNumber > secondNumber) {
        std::cout << "The first number " << firstNumber << " is greater than the second number " << secondNumber << "." << std::endl;
    } else {
        std::cout << "The numbers are equal." << std::endl;
    }

    return 0;
}
