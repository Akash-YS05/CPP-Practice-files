#include <iostream>

void evenOrOdd(int num);

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    evenOrOdd(number);
}

void evenOrOdd(int num) {
    if (num % 2) {
        std::cout << num << " is odd.\n";
    } else {
        std::cout << num << " is even.\n";
    }
}