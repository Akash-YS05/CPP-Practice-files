#include <iostream>

int main() {
    int temp;
    bool sunny = true;
    std::cout << "Enter temperature: ";
    std::cin >> temp;

    if (temp > 0 && temp < 30) {    //&& - both conditions must be true 
        std::cout << "Cool temperature";
    } else if (temp <=0 || temp >30) {
        std::cout << "Bad temperature";   //|| - only one condition needs to be true
    } 
    if (!sunny) {
        std::cout << "Not sunny weather";
    } else {
        std::cout << "Sunny weather";
    }
}