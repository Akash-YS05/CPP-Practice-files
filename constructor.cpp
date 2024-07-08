//constructor - special method which is automatically called when an object is instantiated
//useful to assign values to attributes as arguments 

#include <iostream>

class Student{
    public:
        std::string name;
        int age;
        double gpa;

    //constructor -
    Student(std::string x, int y, double z){
        // this->name = name;
        // this->age = age;
        // this->gpa = gpa;     only when passed variable name is same as class var names
        name = x;
        age = y;
        gpa = z;
    }
};

int main() {

    Student kid1("Akash", 19, 3.5);

    std::cout << kid1.name << '\n';
    std::cout << kid1.age << '\n';
    std::cout << kid1.gpa << '\n';

    return 0;
}