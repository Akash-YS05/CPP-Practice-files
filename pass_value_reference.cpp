//pass by value (without & op) - passes a copy of the original value the function hence making no change in the og
//pass by reference (with & op) - passes the memory address of the og value to the function hence making changes to it


#include <iostream>

void swap(std::string &x, std::string &y);

int main() {
    std::string x = "Akash";
    std::string y = "Pandey";

    swap(x, y);
    
    std::cout << x << '\n';
    std::cout << y << '\n';
}

// void swap(std::string x, std::string y) {    wont work as its a copy of original value
    void swap(std::string &x, std::string &y) {
        std::string temp;
        temp = x;
        x = y;
        y = temp;
}