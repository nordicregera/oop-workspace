#include <iostream>

extern int array_sum(int array[], int n);
int main() {
    int array1[6] = {1,2,3,4,5,6};
    int array2[5] = {1,3,2,4,2};
    int array3[0] = {};
    std::cout<<"sum of array1: "<<array_sum(array1,6)<<std::endl;
    std::cout<<"sum of array2: "<<array_sum(array2,6)<<std::endl;
    std::cout<<"sum of array3: "<<array_sum(array3,0)<<std::endl;
    return 0;
}
