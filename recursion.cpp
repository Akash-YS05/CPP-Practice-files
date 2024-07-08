//recursion - a function calls itself from within itself

#include <iostream>

int fact(int num);

int main() {

    std::cout << fact(4);

}

int fact(int num) {
    if (num>1) {
        return num * fact(num - 1);
    } else {
        return 1;
    }
}