#include <iostream>

int main() {
    // std::string foods[] = {"pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza"};
    // for (std::string food : foods) {
    //     std::cout << food << '\n';
    // }  
    // too much work, instead --

    std::string foods[40];

    fill(foods, foods+20, "apple");   //starting place, ending place, value
    fill(foods+20, foods+40, "mango");

    for (std::string food : foods) {
        std::cout << food << '\n';
    }

}