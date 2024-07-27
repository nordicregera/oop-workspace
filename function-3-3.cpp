#include <iostream>

double weighted_average(int array[], int n) {
    if (n < 1) {
        return 0.0;
    }

    double sum = 0.0;
    int* number = new int[n]();
    
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (array[i] == array[j]) {
                count++;
            }
        }
        number[i] = count;
    }
    
    for (int i = 0; i < n; i++) {
        sum += array[i] * number[i];
    }

    delete[] number;
    return sum / n;
}
