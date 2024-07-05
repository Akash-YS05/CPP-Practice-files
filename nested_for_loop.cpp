#include <iostream>

int main() {

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << "* ";
        }
        std::cout << '\n';
    }

    std::cout << '\n'; 

    for (int i = 5; i >=1; i--) {
        for (int j = i; j >= 1; j--) {
            std::cout << "* ";
        }
        std::cout << '\n';
    }

}