#include <iostream>
#include <string>
using namespace std;

class Invoice {
    string customer;
    double amount;
public:
    Invoice(const string& c, double a) : customer(c), amount(a) {}

    double calculateTotal() const {
        return amount * 1.1; // 부가세 포함
    }

    void printInvoice() const {
        cout << "[고객] " << customer << ", [총액] " << calculateTotal() << endl;
    }
};
