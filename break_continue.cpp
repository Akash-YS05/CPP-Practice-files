#include <iostream>

int main() {
    for (int i = 1; i <= 20; i++) {
        if (i==13) {
            //break     breaks the entire loop
            continue;   //skips current iteration
        } 
        
        std::cout << i << '\n';

    }

}