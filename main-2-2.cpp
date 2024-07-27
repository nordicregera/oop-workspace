#include <iostream>

extern int max_element(int array[], int n);
int main() {
    int array1[6] = {1,6,6,4,5,6};
    int array2[5] = {1,3,2,4,2};
    int array3[0] = {};
    std::cout << "max of array1: " << max_element(array1,6) << std::endl;
    std::cout << "max of array2: " << max_element(array2,5) << std::endl;
    std::cout << "max of array3: " << max_element(array3,0) << std::endl;
    return 0;
}