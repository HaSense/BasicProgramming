class Invoice {
    string customer;
    double amount;
public:
    Invoice(const string& c, double a) : customer(c), amount(a) {}

    double calculateTotal() const {
        return amount * 1.1;
    }

    string getCustomer() const {
        return customer;
    }
};

class InvoicePrinter {
public:
    void print(const Invoice& invoice) const {
        cout << "[고객] " << invoice.getCustomer()
             << ", [총액] " << invoice.calculateTotal() << endl;
    }
};
