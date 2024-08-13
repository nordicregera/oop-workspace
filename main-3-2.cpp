#include <iostream>

int* readNumbers();  
bool equalsArray(int* numbers1, int* numbers2, int length);  
int* reverseArray(int* numbers, int length);  

int main() {
    std::cout << "Enter 10 numbers for the array:" << std::endl;
    int* numbers1 = readNumbers();  

    int* reversedArray = reverseArray(numbers1, 10); 

    bool areEqual = equalsArray(numbers1, reversedArray, 10);  
    std::cout << (areEqual ? "true" : "false") << std::endl;  
    delete[] numbers1; 
    delete[] reversedArray;  

    return 0;
}
