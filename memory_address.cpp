//& - address-of operator. memory address of the value stored in variable


#include <iostream>

int main() {
    std::string name = "Akash";
    int age = 19;
    bool pass = true;

    std ::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &pass << '\n';

    return 0;
}