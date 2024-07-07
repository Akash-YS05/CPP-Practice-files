//BUBBLE SORT

#include <iostream>

int main() {
    int nums[] = {4, 8, 9, 10, 3, 6, 1, 7, 2, 5};
    int size = sizeof(nums)/sizeof(nums[0]);
    int temp;

    for (int i=0; i<size-1; i++) {
        for (int j=0; j<size - i - 1; j++) {
            if(nums[j] < nums[j+1]) {
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;   
            }
        }

    }

    for (int element : nums) {
        std::cout << element << " ";
    }
}