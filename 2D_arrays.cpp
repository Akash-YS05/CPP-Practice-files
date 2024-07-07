#include <iostream>

int main() {
    //first bracket - rows, second - columns(must put its value)
    std::string cars[][3] = {{"Bugatti", "Mustang", "Merc"},
                            {"Chevy", "Audi", "BMW"},
                            {"Maruti", "honda", "Suzuki"}};

    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout << cars[i][j] << '\t';
        }
        std::cout << '\n';
    }

}