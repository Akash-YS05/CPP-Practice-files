#include <iostream>

int main() {
    int marks,n1,n2,n3;
    // std::cout << "enter your marks";
    // std::cin >> marks;

    // marks > 50 ? std::cout << "Good job" : std::cout << "Bad job";
    std::cout << "enter 1st num: ";
    std::cin >> n1;
    std::cout << "enter 2nd num: ";
    std::cin >> n2;
    std::cout << "enter 3rd num: ";
    std::cin >> n3;
    
    n1 > n2 ? ((n1 > n3 ? std::cout << "Largest num is" << n1 : std::cout << "Largest num is n3")): ((n2 > n3 ? std::cout << "Largest num is n2" : std::cout << "Largest num is n3"));

    return 0;
}