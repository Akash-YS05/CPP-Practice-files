//fn template - used to avoid function overload in case we dont know the data type of the passed variables

#include <iostream>

// int max(int x, int y) {
//     return (x>y)?x:y;
// }
// double max(double x, double y) {
//     return (x>y)?x:y;
// }
// char max(char x, char y) {
//     return (x>y)?x:y;
// }


template <typename T, typename U>

auto max(T x, U y) {       //auto - compiler deduces the data type of output
    return (x>y)?x:y;
}

int main() {

    // std::cout << max(1,2);
    // std::cout << max(1.1,2.4);
    // std::cout << max('1','4');     
    //need to create 3 functions that do the same thing

    std::cout << max(1,2);
    std::cout << max(1.3,2.9);
    std::cout << max('1','2');
    std::cout << max('1',2.3);      //can also take vars of 2 data types


    return 0;
}