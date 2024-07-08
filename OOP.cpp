//object - a collection of attributes and methods.
// 'class' used to create objects

#include <iostream>

class Human{
    public:           //public - an access modifier
        std::string name;
        int age = 20;
        std::string occupation;

        void eat() {
            std::cout << "This person is eating.\n";
        }
        void sleep() {
            std::cout << "This person is sleeping.\n";
        }
        void drink() {
            std::cout << "This person is drinking.\n";
        }
};

int main() {

    Human man;
    Human woman;

    man.name = "Akash";
    man.occupation = "Student";
    // man.age = 19;

    woman.name = "Lia";
    woman.occupation = "Scientist";
    // woman.age = 28;

    std::cout << man.name << " is a " << man.occupation << ". He is " << man.age << " years old.\n";
    std::cout << woman.name << ", who is a " << woman.occupation << " is " << woman.age << " years old.\n";

    man.eat();
    man.sleep();

    woman.drink();
    woman.sleep();


    return 0;
}