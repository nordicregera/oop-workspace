#ifndef INVOICE_H
#define INVOICE_H

#include <string>

class Invoice {
private:
    std::string invoiceId;
    double dollarsOwed;

public:

    Invoice(const std::string& id) : invoiceId(id), dollarsOwed(0.0) {}


    void addServiceCost(double costDollars) {
        if (costDollars > 0) {
            dollarsOwed += costDollars;
        }
    }


    double getDollarsOwed() const {
        return dollarsOwed;
    }


    std::string getInvoiceId() const {
        return invoiceId;
    }
};

#endif
