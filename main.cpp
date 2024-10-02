#include "InvoiceTest.h"
#include "EquivalenceTests.h"

int main() {
    InvoiceTest invoiceTest;
    invoiceTest.runTests();

    EquivalenceTests equivalenceTests;
    equivalenceTests.runTests();

    return 0;
}
