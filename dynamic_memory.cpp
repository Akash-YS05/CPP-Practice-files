//dynamic memory - Memory that is allocated after the program is already compiled and running. 'new' operator is used to allocate memory in the heap rather than the stack.


#include <iostream>

int main() {
    int *pNum = NULL;
    char *pGrades = NULL;
    int size;

    std::cout << "Size of array: ";
    std::cin >> size;

    pGrades = new char[size];

    for (int i = 0; i < size; i++) {
        std::cout << "Enter grade: ";
        std::cin >> pGrades[i];
    }

    for (int i = 0; i < size; i++) {
        std::cout << pGrades[i] << " ";
    }

    delete[] pGrades;       //de;ete[] to delete array


    pNum = new int;

    *pNum = 12;

    std::cout << "address: " << pNum << '\n';
    std::cout << "value: " << *pNum << '\n';

    delete pNum;        //freeing up memory or it will cause memory leak

    return 0;
}