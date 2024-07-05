#include <iostream>

int main() {
    std::string name;

    while(name.empty()) {
        std::cout << "enter name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello " << name << '\n';
}