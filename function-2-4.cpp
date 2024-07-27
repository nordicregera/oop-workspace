#include <iostream>

bool is_ascending(int array[], int n) {
    for (int i=0;i<n;i++) {
        if (n<1) {
            return false;
        }
        if (array[i]>array[i+1]) {
            return false;
        }
    }
    return true;
}