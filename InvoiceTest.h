#include <iostream>
#include "Invoice.h"

class InvoiceTest {
public:
    void runTests() {
        testConstructor();
        testAddServiceCost();
        testGetDollarsOwed();
        testGetInvoiceId();
    }

private:
    void testConstructor() {
        Invoice invoice("XYZ123");
        if (invoice.getInvoiceId() != "XYZ123") {
            std::cout << "Constructor test failed!" << std::endl;
        }
        if (invoice.getDollarsOwed() != 0) {
            std::cout << "Constructor test failed! Initial dollars owed should be 0." << std::endl;
        }
    }

    void testAddServiceCost() {
        Invoice invoice("ABC123");
        invoice.addServiceCost(100);
        if (invoice.getDollarsOwed() != 100) {
            std::cout << "Test 1 for addServiceCost failed!" << std::endl;
        }

        invoice.addServiceCost(50);
        if (invoice.getDollarsOwed() != 150) {
            std::cout << "Test 2 for addServiceCost failed!" << std::endl;
        }

        invoice.addServiceCost(-10); 
        if (invoice.getDollarsOwed() != 150) {
            std::cout << "Test 3 for addServiceCost failed! Negative cost should not affect the total." << std::endl;
        }
    }

    void testGetDollarsOwed() {
        Invoice invoice("DEF456");
        invoice.addServiceCost(75);
        if (invoice.getDollarsOwed() != 75) {
            std::cout << "Test getDollarsOwed failed!" << std::endl;
        }
    }

    void testGetInvoiceId() {
        Invoice invoice("TEST123");
        if (invoice.getInvoiceId() != "TEST123") {
            std::cout << "Test getInvoiceId failed!" << std::endl;
        }
    }
};
