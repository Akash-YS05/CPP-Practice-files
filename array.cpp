#include <iostream>

int main() {
    std::string car[] = {"Mercedes", "BMW", "Bugatti"};    //format for array
    double num[5];
    car[1] = "Lambo";    //reassigning values
    for (int i=0;i<=4;i++) {
        std::cout << "Enter number: ";
        std::cin >> num[i];
    }

    for (int i=0;i<=4;i++) {
        std::cout << num[i] << '\n'; 
    }

    std::cout << car[0] << '\n';
    std::cout << car[1] << '\n';
    std::cout << car[2];
}