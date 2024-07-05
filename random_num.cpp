#include <iostream>
#include <ctime>

int main() {

    srand(time(NULL));

    int num = (rand() % 6) + 1;    //for max number 6
    int num2 = (rand() % 10) + 1;   //max 10
    int num3 = (rand() % 100) + 1;   //max 100

    std::cout << num << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';
    
}