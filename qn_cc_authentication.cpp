//LUHN ALGORITHM

#include <iostream>

int getDigit(const int number);
int oddSum(const std::string ccNo);
int evenSum(const std::string ccNo);

int main() {
    std::string cc_no;
    int result = 0;

    std::cout << "Enter Credit Card Number: ";
    std::cin >> cc_no;

    result = evenSum(cc_no) + oddSum(cc_no);

    if (result % 10) {
        std::cout << cc_no << " - Invalid Credit Card number.";
    } else {
        std::cout << cc_no << " - Valid Credit Card Number.";
    }

}

int getDigit(const int number) {
    return number % 10 + (number / 10 % 10);
}

int oddSum(const std::string ccNo) {
    int sum=0;
    for (int i = ccNo.size() - 1; i>=0; i-=2) {
        sum += ccNo[i] - '0';
    }
    return sum;
}

int evenSum(const std::string ccNo) {
    int sum=0;
    for (int i = ccNo.size() - 2; i>=0; i-=2) {
        sum += getDigit((ccNo[i] - '0') * 2);
    }
    return sum;
}