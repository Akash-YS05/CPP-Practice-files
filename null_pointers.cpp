//Null pointer -  When pointer is not pointing to any address
//keyword used - nullptr

#include <iostream>

int main() {
    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if (pointer == nullptr) {
        std::cout << "not assigned address";
    } else {
        std::cout << "assigned address\n";
        std::cout << *pointer;      //MUST NOT TRY TO DEREFERENCE NULLPTR OR ELSE GOD KNOWS WHAT

    }
}