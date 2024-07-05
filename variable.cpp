#include <iostream>

int main() {
    // int - stores whole number
    int x; 
    x = 5;
    //OR
    int y = 6;
    int sum = x + y;
    int pii = 3.14;  //output - 3


    //double - includes decimal
    double pi = 3.14;
    double temp = 37.5;

    //char - single character
    char grade = 'A';  //single quotes
    char initial = 'B';

    //boolean - true or false
    bool pass = true;  //output - 1
    bool fail = false;  //output - 0

    //string - sequence of text - word, sentences etc
    std::string name = "Akash";   //double quotes
    std::string food = "pizza";
    std::string sent = "Hey how are you??";

    std::cout << x <<'\n';
    std::cout << y <<'\n';
    std::cout << sum <<'\n';
    std::cout << pi <<'\n';
    std::cout << temp <<'\n';
    std::cout << initial <<'\n';
    std::cout << grade <<'\n';
    std::cout << pass <<'\n';
    std::cout << fail <<'\n';
    std::cout << name <<'\n';
    std::cout << sent <<'\n';
    std::cout << "Hello " << name <<'\n';
    std::cout << "Your favorite food is " << food <<'\n';

    
    
    return 0;
}