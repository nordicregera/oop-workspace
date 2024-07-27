#include <iostream>

extern int min_element(int array[], int n);
int main() {
    int array1[6] = {1,6,6,4,5,6};
    int array2[5] = {1,3,2,4,2};
    int array3[0] = {};
    std::cout << "min of array1: " << min_element(array1,6) << std::endl;
    std::cout << "min of array2: " << min_element(array2,5) << std::endl;
    std::cout << "min of array3: " << min_element(array3,0) << std::endl;
    return 0;
}