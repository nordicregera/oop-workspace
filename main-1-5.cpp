#include <iostream>

extern int count_evens(int number);
int main() {
    int number1 = 4;
    int number2 = 6;
    int number3 = 0;
    std::cout << "even of number1: " << count_evens(number1) << std::endl;
    std::cout << "even of number2: " << count_evens(number2) << std::endl;
    std::cout << "even of number3: " << count_evens(number3) << std::endl;
    return 0;
}