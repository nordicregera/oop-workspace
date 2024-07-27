#include <iostream>

extern int num_count(int array[], int n, int number);
int main() {
    int array1[6] = {1,6,6,4,5,6};
    int array2[5] = {1,3,2,4,2};
    int array3[0] = {};
    std::cout << "sum of array1: " << num_count(array1,6,6) << std::endl;
    std::cout << "sum of array2: " << num_count(array2,5,2) << std::endl;
    std::cout << "sum of array3: " << num_count(array3,0,0) << std::endl;
    return 0;
}