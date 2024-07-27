#include <iostream>

extern double sum_even(double array[], int n);

int main() {
    double array1[6] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0}; 
    double array2[0] = {};

    std::cout << "Sum of even positions in array1: " << sum_even(array1, 6) << std::endl;
    std::cout << "Sum of even positions in array2: " << sum_even(array2, 0) << std::endl;

    return 0;
}
