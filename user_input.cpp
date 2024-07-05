// cout - <<
//cin - >>

#include <iostream>

int main() {

    std::string name;
    int age;

    std::cout << "What is your full name?: ";
    std::getline(std::cin >> std::ws, name); //to read the input after spaces too, std::ws allows us to use cin above the getline line

    std::cout << "What is your age?: ";
    std::cin >> age;

    std::cout << "Hello! " << name <<'\n';
    std::cout << "Your age is " << age << " years old" << '\n';
    return 0;
}