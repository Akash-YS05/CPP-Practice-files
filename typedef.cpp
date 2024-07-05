//typedef - new identifier for an exisiting data type

#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;    long declaration of a data type given a smaller alias
// typedef std::string text_t;
// typedef int num_t;

//'using' keyword is more popularly used :-

using pairlist_t = std::vector<std::pair<std::string, int>>;
using text_t = std::string;
using num_t = int;

int main () {
    using std::cout;

    pairlist_t pairlist;
    text_t name = "Akash";
    num_t x = 700;

    cout << name << '\n';
    cout << x << '\n';
    return 0;
}