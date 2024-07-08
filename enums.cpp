//enums - a user defined data type that consists of paired name-integer constants

#include <iostream>

enum Day {sunday=0, monday=1, tuesday=2, wednesday=3};       //default numbering is the same (0,1,2,...)

int main() {

    Day day = tuesday;

    switch(day) {
        case 0:
            std::cout << "Its Sunday\n";
            break;
        case 1:
            std::cout << "Its Monday\n";
            break;
        case 2:
            std::cout << "Its Tuesday\n";
            break;
    }

}