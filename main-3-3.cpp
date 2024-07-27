#include <iostream>

extern double weighted_average(int array[], int n);

int main() {
    int array1[8] = {0, 1, 2, 2, 2, 3, 5, 1};
    int array2[0] = {}; 
    int array3[6] = {1, 2, 1, 4, 1, 3}; 

    std::cout << "Weighted average of array1: " << weighted_average(array1, 8) << std::endl;
    std::cout << "Weighted average of array1: " << weighted_average(array2, 0) << std::endl;
    std::cout << "Weighted average of array3: " << weighted_average(array3, 6) << std::endl;

    return 0;
}