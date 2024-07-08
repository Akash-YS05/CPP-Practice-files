//inheritance - a class can recieve attributes and methods from another class.

#include <iostream>

class Animal{
    public:
        bool alive = true;
        int age = 5;

    void eat(){
        std::cout << "This animal is eating";
    }
};

class Dog : public Animal{
    public:

    void bark() {
        std::cout << "The dog barks!";
    }
};

class Cat : public Animal{
    public:

    void meow() {
        std::cout << "The dog barks!";
    }
};


int main(){
    Dog dog;

    std::cout << dog.alive;      //inherited 
    dog.eat();

    Cat cat;
    std::cout << cat.age << '\n';
    cat.eat();

    return 0;
}