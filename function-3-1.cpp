#include <iostream>

int* readNumbers() {
    int* arr = new int[10];
    for (int i = 0; i < 10; ++i) {
        std::cin >> arr[i];
    }
    return arr;
}

bool equalsArray(int* numbers1, int* numbers2, int length) {
    if (length < 1) {
        return false;
    }

    for (int i = 0; i < length; ++i) {
        if (numbers1[i] != numbers2[i]) {
            return false;
        }
    }

    return true;
}
