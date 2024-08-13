#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

int* readNumbers() {
    int* arr = new int[10];
    for (int i = 0; i < 10; ++i) {
        std::cin >> arr[i];
    }
    return arr;
}

int secondSmallestSum(int* numbers, int length) {
    std::vector<int> sums;

  
    for (int i = 0; i < length; ++i) {
        int sum = 0;
        for (int j = i; j < length; ++j) {
            sum += numbers[j];
            sums.push_back(sum);
        }
    }

  
    std::sort(sums.begin(), sums.end());


    if (sums.size() < 2) {
        return INT_MAX;
    }
    return sums[1];
}
