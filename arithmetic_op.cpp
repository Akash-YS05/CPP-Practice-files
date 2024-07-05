/*PRECEDANCE OF OPERATORS -
    paranthesis
    multiply and divide
    add and subtract
*/

#include <iostream>

int main() {
    int students = 30;
    students++; //31
    students += 5; //36
    students--; //35
    students-=2; //33

    students*=2; //66
    students/=2; //33
    students%=5; //3

    std::cout << students << '\n';

    return 0;
}