#include <iostream>

extern bool is_fanarray(int array[], int n);

int main() {
    int array1[5] = {7, 6, 4, 3, 1};
    int array2[0] = {};
    int array3[5] = {1, 2, 3, 2, 1};

    is_fanarray(array1, 5);
    is_fanarray(array2, 0);

    std::cout << "Array 1 is descending: " << (is_fanarray(array1, 5) ? "true" : "false") << std::endl;
    std::cout << "Array 2 is descending: " << (is_fanarray(array2, 0) ? "true" : "false") << std::endl;
    std::cout << "Array 2 is descending: " << (is_fanarray(array3, 5) ? "true" : "false") << std::endl;
    return 0;
}