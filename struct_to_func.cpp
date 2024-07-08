#include <iostream>

struct Car{
    std::string model;
    int year;
    std::string color;
};

void printCar(Car &car);
void paintcar(Car &car, std::string color);

int main() {
    Car car1;
    Car car2;

    car1.model = "Chevron";
    car1.year = 2000;
    car1.color = "Blue";

    car2.model = "Mustang";
    car2.year = 2010;
    car2.color = "Blue";

    paintcar(car2, "Gold");
    printCar(car2);


    return 0;
}

void printCar(Car &car) {         // normally passes a copy of the original struct
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}

void paintcar(Car &car, std::string color) {
    car.color = color;
}