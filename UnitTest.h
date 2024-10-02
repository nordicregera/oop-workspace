#include <iostream>
#include "Addition.h"

class EquivalenceTests {
public:
    void runTests() {
        testPositiveIntegers();
        testNegativeIntegers();
        testMixedIntegers();
        testZeroes();
        testSpecialCases();
        testBigNumbers();
    }

private:
    void testPositiveIntegers() {
        Addition addition;
        if (addition.add(5, 10) != 15) {
            std::cout << "Test 1 failed! Positive integers" << std::endl;
        }
    }

    void testNegativeIntegers() {
        Addition addition;
        if (addition.add(-4, -5) != -9) {
            std::cout << "Test 2 failed! Negative integers" << std::endl;
        }
    }

    void testMixedIntegers() {
        Addition addition;
        if (addition.add(7, -3) != 4) {
            std::cout << "Test 3 failed! Mixed integers" << std::endl;
        }
    }

    void testZeroes() {
        Addition addition;
        if (addition.add(0, 0) != 0) {
            std::cout << "Test 4 failed! Zeroes" << std::endl;
        }
    }

    void testSpecialCases() {
        Addition addition;
        if (addition.add(1, -1) != 0) {
            std::cout << "Test 5 failed! Special cases (1 and -1)" << std::endl;
        }
    }

    void testBigNumbers() {
        Addition addition;
        if (addition.add(1000000, 2000000) != 3000000) {
            std::cout << "Test 6 failed! Big numbers" << std::endl;
        }
    }
};


