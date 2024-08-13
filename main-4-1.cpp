#include <iostream>

int* readNumbers();  
int secondSmallestSum(int* numbers, int length);  

int main() {
    std::cout << "Enter 10 numbers for the array:" << std::endl;
    int* numbers = readNumbers(); 

    int secondSmallest = secondSmallestSum(numbers, 10); 
    std::cout << "The second smallest sum is: " << secondSmallest << std::endl; 

    delete[] numbers;  

    return 0;
}
