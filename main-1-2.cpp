#include <iostream>

extern double array_mean(int array[], int n);
int main() {
    int array1[6] = {1,2,3,4,5,6};
    int array2[5] = {1,3,2,4,2};
    int array3[0] = {};
    std::cout<<"mean of array1: "<<array_mean(array1,6)<<std::endl;
    std::cout<<"mean of array2: "<<array_mean(array2,6)<<std::endl;
    std::cout<<"mean of array3: "<<array_mean(array3,0)<<std::endl;
    return 0;
}