#include <iostream>

int main() {
    std::string names[] = {"akash", "ex1", "ex2", "ex3", "ex4"};
    char grades[] = {'A', 'B', 'C', 'D', 'E'};

    for (std::string name : names) {
        std::cout << name << '\n';
    }

    for (char grade : grades) {
        std::cout << grade << '\n';
    }
}