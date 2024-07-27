#include <iostream>

extern int median_array(int array[], int n);

int main() {
    int array1[5] = {3, 5, 2, 1, 4};
    int array2[4] = {1, 3, 2, 1}; 
    int array3[0] = {};
    

    std::cout << "Median of array1: " << median_array(array1, 5) << std::endl;
    std::cout << "Median of array2: " << median_array(array2, 4) << std::endl;
    std::cout << "Median of array3: " << median_array(array3, 0) << std::endl;

    return 0;
}
