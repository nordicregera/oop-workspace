#include <iostream>
double arrayMin(double* array, int size) ;
int main() {
    double arr[5] = {1.1 ,2.2 ,4.2, 5.2, 7.1};
    int size = 5;
    double minVal =  arrayMin(arr, size);

    std::cout<<"the minimum value is" <<minVal<<std::endl;

    return 0;
}