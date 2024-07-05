#include <iostream>

int main() {
    const double PI = 3.14159;
    // PI = 1; shows error
    const int LIGHT = 299792458;
    double radius = 7.5;
    double circum = 2 * PI * radius;

    std::cout << "Circumference is " << circum <<'\n';

    return 0;
}