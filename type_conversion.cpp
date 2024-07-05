//type conversion --
//implicit - automatic
//explicit - precede value with new data type

#include <iostream>

int main() {

    int x = 3.14; //truncates the .14 - implicit
    double y = (int) 3.14;  //truncates explicitly

    char z = 100; //implicitly converts to char by ascii value
    
    int questions = 10;
    int correct = 8;
    //double score = correct/questions * 100; o/p = 0 as int division
    double score = correct/(double) questions * 100;

    std::cout << y << '\n';
    std::cout << (char) 100 << '\n';  //explicit conversion
    std::cout << score << "%";

}