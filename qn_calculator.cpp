#include <iostream>

int main() {
    char op;
    double num1, num2;

    std::cout << "Enter number 1: ";
    std::cin >> num1;

    std::cout << "Enter number 2: ";
    std::cin >> num2;

    std::cout << "Enter the operation (+, -, *, /): ";
    std::cin >> op;

    switch(op) {
        case '+' :
            std::cout << "Result is: " << num1+num2 << '\n';
            break;
        case '-' :
            std::cout << "Result is: " << num1-num2 << '\n';
            break;
        case '*' :
            std::cout << "Result is: " << num1*num2 << '\n';
            break;
        case '/' :
            std::cout << "Result is: " << num1/num2 << '\n';
            break;
        default: 
            std::cout << "Operation should be amongst the options";
    }

    return 0;
}