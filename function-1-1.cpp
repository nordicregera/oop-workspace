#include <iostream>
double arrayMin(double* array, int size) {
    double min=array[0];
    for (int i=1;i<size;i++) {
        if (array[i]<min) {
            array[i]=min;
        }

    }
    return min;
}