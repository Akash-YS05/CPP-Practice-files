#include <iostream>

void print();

int num = 3;      //global variable

int main() {
    int num = 1;     //local variable - a function always checks for local var first

    std::cout << num << '\n';
    print();
    std::cout << ::num << '\n';      // :: is the scope resolution operator - can use the global variable through this
}

void print() {
    int num = 2;
    std::cout << num << '\n';
}