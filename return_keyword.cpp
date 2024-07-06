#include <iostream>

double square(double side);

std::string concatName(std::string string1, std::string string2);

int main() {
    double length = 7.0;
    double area = square(length);

    std::string firstname = "akash";
    std::string lastname = "pamdey";
    std::string fullname = concatName(firstname, lastname);


    std::cout << "Area = " << area << '\n';

    std::cout << "Hello " << fullname << '\n';

    return 0;
}

double square(double side) {      //data type of function output is necessary when using return
    return side * side;   
}

std::string concatName(std::string string1, std::string string2) {
    return string1 + " " + string2;
}
