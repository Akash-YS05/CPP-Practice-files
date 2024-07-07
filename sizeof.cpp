#include <iostream>

int main() {
    double gpa = 2;   //8
    std::string name = "akash";   //24
    char grade = 'B';    //1
    bool pass = true;    //1
    char gardes[] = {'A', 'B','C', 'D'};    //4

    std::cout << sizeof(gpa) << " bytes\n";
    std::cout << sizeof(name) << " bytes\n";
    std::cout << sizeof(grade) << " bytes\n";
    std::cout << sizeof(pass) << " bytes\n";
    std::cout << sizeof(gardes) << " bytes\n";
    std::cout << sizeof(gardes)/sizeof(gardes[0]) << " elements\n";
}