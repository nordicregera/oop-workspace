#include <iostream>

extern void two_five_nine(int array[], int n) ;
int main() {
    int array1[6] = {1,6,6,4,5,6};
    int array2[5] = {1,3,2,4,2};
    int array3[0] = {};
     two_five_nine(array1,6); 
     two_five_nine(array2,5);
     two_five_nine(array3,0);
    return 0;
}