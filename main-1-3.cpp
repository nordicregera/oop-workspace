#include <iostream>
double* duplicateArray(double* array, int size) ;

int main() {

    double myArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);


    double* duplicatedArray = duplicateArray(myArray, arraySize);
;
    for (int i = 0; i < arraySize; i++) {
        std::cout << duplicatedArray[i] << " ";
    }
    std::cout << std::endl;

    delete[] duplicatedArray;

    return 0;
}
