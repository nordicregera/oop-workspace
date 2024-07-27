#include <iostream>

extern bool is_ascending(int array[], int n) ;
int main() {
    int array1[6] = {1,6,6,4,5,6};
    int array2[5] = {1,3,2,4,2};
    int array3[0] = {};
    std::cout << "array of ascending: " <<(is_ascending(array1,6) ? "true" : "false") << std::endl;
    std::cout << "array of ascending: " <<(is_ascending(array2,5) ? "true" : "false") << std::endl;
    std::cout << "array of ascending: " <<(is_ascending(array3,0) ? "true" : "false") << std::endl;
    return 0;
}