#include <iostream>

int* readNumbers();  
bool equalsArray(int* numbers1, int* numbers2, int length); 

int main() {
    std::cout << "Enter 10 numbers for the first array:" << std::endl;
    int* numbers1 = readNumbers();  

    std::cout << "Enter 10 numbers for the second array:" << std::endl;
    int* numbers2 = readNumbers(); 

    bool areEqual = equalsArray(numbers1, numbers2, 10);  
    std::cout << (areEqual ? "true" : "false") << std::endl;  

    delete[] numbers1;  
    delete[] numbers2;  

    return 0;
}
