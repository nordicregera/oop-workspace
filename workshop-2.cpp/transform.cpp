#include <iostream>
#include <string>

std::string convertBase10ToBase2(int number) {
    if (number == 0) {
        return "0";
    }

    std::string result = "";
    while (number > 0) {
        int remainder = number % 2;
        result = std::to_string(remainder) + result;
        number = number / 2;
    }

    return result;
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    std::string binary = convertBase10ToBase2(number);
    std::cout << "Binary: " << binary << std::endl;

    return 0;
}

