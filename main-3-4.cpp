#include <iostream>
extern void print_pass_fail(char grade);

int main() {
    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};
    int n = sizeof(grades) / sizeof(grades[0]);

    for (int i = 0; i < n; i++) {
        std::cout << "Grade " << grades[i] << ": ";
        print_pass_fail(grades[i]);
    }

    return 0;
}
