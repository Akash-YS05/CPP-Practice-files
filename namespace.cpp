//NAMESPACE - allows variable with identical name to exist

#include <iostream>

namespace first
{
    int num = 1;
} 
namespace second
{
    int num = 2;
} 

int main () {
    using namespace first;
    //similarly 
    using std::cout;
    using std::string;

    string name = "Akash"; 

    cout << num <<'\n';   //no need to prefix the namespace
    // std::cout << first::num << '\n';
    cout << second::num << '\n';

    return 0;
}
