#include <iostream>

double getTotal(double prices[], int size);

int main() {
    double prices[] = {100, 200.50, 500, 300, 450};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size);    //size needs to be given as the array decomposes to its pointer information hence its size is unkown to the function.

    std::cout << "Total price = Rs. " << total << '\n';
}

double getTotal(double prices[], int size) {
    double total = 0;
    for (int i = 0; i < size; i++) {
        total+=prices[i];
    }
    return total;
}