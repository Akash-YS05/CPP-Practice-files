#include <iostream>
#include <iomanip>

double depositSum(double total, double amount);
double withdrawSum(double total, double amount);
void balance(double total);

int main() {
    double total = 0, withdraw, deposit;
    char op;

    do {
        std::cout << "What do you want to do? (W, D, B, E): ";
        std::cin >> op;


    
        switch(op) {
            case 'W':
                std::cout << "Enter the amount to be withdrawn: ";
                std::cin >> withdraw;
                total = withdrawSum(total, withdraw);
                std::cout << withdraw << " Rs. withdrawn succesfully.\n";
                std::cout << "Total balance now = Rs. " << std::setprecision(2) << std::fixed << total << '\n';
                break;
            case 'D':
                std::cout << "Enter the amount to be deposited: ";
                std::cin >> deposit;
                total = depositSum(total, deposit);
                std::cout << deposit << " Rs. deposited succesfully.\n";
                std::cout << "Total balance now = Rs. " << std::setprecision(2) << std::fixed << total << '\n';
                break;
            case 'B':
                balance(total);
                break;
            case 'E':
                std::cout << "Thanks for visiting!";
                break;
        }
    } while (op != 'E');
    

    

    return 0;
}

double withdrawSum(double total, double amount) {
    return total - amount;
}
double depositSum(double total, double amount) {
    return total + amount;
}
void balance(double total) {
    std::cout << "Total balance in the account is - Rs. " << std::setprecision(2) << std::fixed << total << '\n';
}