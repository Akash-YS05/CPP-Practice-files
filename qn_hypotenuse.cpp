#include <iostream>
#include <cmath>

int main() {
    double side1;
    double side2;
    double hypo;

    std::cout << "Measurement of one side: " << '\n';
    std::cin >> side1;

    std::cout << "Measurement of second side: " << '\n';
    std::cin >> side2;

    hypo = sqrt(pow(side1, 2) + pow(side2, 2));

    std::cout << "Measurement of hypotenuse is - " << hypo << "cm" << '\n';

    return 0;
}