#include <iostream>

extern bool is_descending(int array[], int n);

int main() {
    int array1[5] = {7, 6, 4, 3, 1};
    int array2[0] = {};

    is_descending(array1, 5);
    is_descending(array2, 0);

    std::cout << "Array 1 is descending: " << (is_descending(array1, 5) ? "true" : "false") << std::endl;
    std::cout << "Array 2 is descending: " << (is_descending(array2, 0) ? "true" : "false") << std::endl;

    return 0;
}