#include <iostream>

int main() {
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age < 0) {
        std::cout << "You aint even alive bro";
    } else if (age >= 18 && age <=60) {
        std::cout << "Welcome to the site!";
    } else if (age > 60) {
        std::cout << "Age is above requirement";
    } else {
        std::cout << "Invalid";  // 0 comes under invalid
    }

    return 0;
}