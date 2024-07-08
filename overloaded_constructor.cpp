//overloaded constructor - multiple constructors with the same name but with different parameters

#include <iostream>

class Pizza{
    public:
        std::string topping1;
        std::string topping2;
        

    Pizza(std::string topping1) {
        this->topping1 = topping1;
    }
    Pizza(std::string topping1, std::string topping2) {
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
    Pizza() {

    }
};


int main() {

    Pizza pizza1("paneer");
    std::cout << pizza1.topping1 << '\n';

    Pizza pizza2("paneer", "pepperoni");
    std::cout << pizza2.topping1 << '\n' << pizza2.topping2 << '\n';

    Pizza pizza3();
    std::cout << pizza3 << '\n';



}