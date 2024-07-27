#include <iostream>

extern int sum_two_arrays(int array[], int secondarray[], int n) ;
int main() {
    int array1[6] = {1,2,3,4,5,6};
    int array2[5] = {1,3,2,4,2};
    int array3[0] = {};
    std::cout<<"sum of array1 and array1: "<<sum_two_arrays(array1,array1,6)<<std::endl;
    std::cout<<"sum of array2 and array2: "<<sum_two_arrays(array2,array2,5)<<std::endl;
    std::cout<<"sum of array3 and array3: "<<sum_two_arrays(array3,array3,0)<<std::endl;
    return 0;
}