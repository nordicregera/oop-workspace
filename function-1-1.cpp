#include <iostream>
double arrayMin(double* array, int size) {
    double min=array[0];
    for (int i=1;i<size;i++) {
        if (min>array[i]) {
            array[i]=min;
        }

    }
    return min;
}