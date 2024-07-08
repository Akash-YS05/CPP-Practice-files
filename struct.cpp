//struct - contains variable of different data types

#include <iostream>

struct student{
    std::string name;
    int age;
    double gpa = 2;    //default value
    bool pass;
};

int main() {

    student student1;
    student1.name = "Akash";
    student1.age = 19;
    // student1.gpa = 4;
    student1.pass = true;

    student student2;
    student2.name = "Kratos";
    student2.age = 109;
    // student2.gpa = 4000;
    student2.pass = false;

    std::cout << student1.name << '\n';
    std::cout << student1.age << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.pass << '\n';

    std::cout << student2.name << '\n';
    std::cout << student2.age << '\n';
    std::cout << student2.gpa << '\n';
    std::cout << student2.pass << '\n';

    return 0;
}
