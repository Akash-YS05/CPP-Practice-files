#include <iostream>

int main() {
    double temp;
    char unit;

    std::cout << "Enter your unit to convert to (F or C): ";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f') {
        std::cout << "Enter temp in Celcius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;

        std::cout << "Temperature is " << temp << " degrees Fahrenheit" << '\n';
    } else if (unit == 'C' || unit == 'c') {
        std::cout << "Enter temp in Fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "Temperature is " << temp << " degrees Celcius" << '\n';

    } else {
        std::cout << "Please enter F or C only" << '\n';
    }
}