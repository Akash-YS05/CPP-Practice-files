//pointers - a variable that stores a memory address of another variable
// & - address-of operator
// * - dereference operator


#include <iostream>

int main() {
    std::string name = "Akash";
    int age = 19;
    std::string foods[5] = {"food1", "food2", "food3", "food4", "food5"};

    std::string *pname = &name;
    int *pAge = &age; 
    std::string *pFoods = foods;     //no need of address-of operator for arrays

    std::cout << pname << '\n';     //output - memory address of name
    std::cout << *pname << '\n';     //output - value stored in the address of name
    std::cout << pAge << '\n';
    std::cout << *pAge << '\n';
    std::cout << *pFoods << '\n';
}