#include <iostream>

void show(const std::string name, const int age);

int main() {
    std::string name = "Akash";
    int age = 19;

    show(name, age);

    return 0;
}

void show(const std::string name, const int age) {    //const keyword used to prevent any change in the values provided
    //name = "smn else"    gives error
    std::cout << name << '\n';
    std::cout << age << '\n';
}