#include <iostream>

int main() {
    std::string name;
    int nameLen;

    std::cout << "Enter a name: ";
    std::getline(std::cin, name);

    nameLen = name.length();

    if (nameLen > 15) {
        std::cout << "Name cant be that long\n";
    } else if (name.empty()) {     //returns a boolean value
        std::cout << "Name needed\n";
    } else {
        //name.clear();    clears the value
        name.append("@gmail.com");
        name.at(0);  //letter at index 0
        name.insert(0, "#");  //inserts the character at the given index
        name.find(' '); //gives the first index of given value in variable
        name.erase(0,3);  //erases value till first to last given index
    }

    

}