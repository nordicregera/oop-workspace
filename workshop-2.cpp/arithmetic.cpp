#include <iostream>
#include <string>
#include <bitset>

std::string addBinary(const std::string &a, const std::string &b) {
    std::string result = "";
    int carry = 0;
    int i = a.size() - 1;
    int j = b.size() - 1;
    
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        carry = sum > 1 ? 1 : 0;
        result = char(sum % 2 + '0') + result;
    }
    
    return result;
}

std::string subtractBinary(const std::string &a, const std::string &b) {
    std::bitset<32> bit_a(a);
    std::bitset<32> bit_b(b);
    std::bitset<32> result = bit_a.to_ulong() - bit_b.to_ulong();
    return result.to_string();
}

std::string leftShift(const std::string &a, int n) {
    std::bitset<32> bit_a(a);
    std::bitset<32> result = bit_a << n;
    return result.to_string();
}

std::string rightShift(const std::string &a, int n) {
    std::bitset<32> bit_a(a);
    std::bitset<32> result = bit_a >> n;
    return result.to_string();
}

int main() {
    std::string bin1 = "1101";  // Binary for 13
    std::string bin2 = "1010";  // Binary for 10
    
    std::string sum = addBinary(bin1, bin2);
    std::string diff = subtractBinary(bin1, bin2);
    std::string left_shift = leftShift(bin1, 2);
    std::string right_shift = rightShift(bin1, 2);
    
    std::cout << "Addition: " << sum << std::endl;
    std::cout << "Subtraction: " << diff << std::endl;
    std::cout << "Left Shift: " << left_shift << std::endl;
    std::cout << "Right Shift: " << right_shift << std::endl;
    
    return 0;
}
