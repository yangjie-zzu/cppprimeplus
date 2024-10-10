#include <iostream>
#include <cstring>
#include "stock20.h"

Stock::Stock() {
    company = new char[8];
    std::strcpy(company, "no name");
    shares = 0;
    share_val = 0;
    total_val = 0;
}

Stock::Stock(const char * co, long n, double pr) {
    int len = std::strlen(co);
    company = new char[len + 1];
    std::strcpy(company, co);
    if (n < 0)
    {
        std::cout << "Number of shares can't be negative; "
                    << company << " Shares set to 0.\n";
        shares = 0;
    } else {
        shares = n;
    }
    share_val = pr;
    set_tol();
}

Stock::~Stock() {
    delete [] company;
}

void Stock::buy(long num, double price) {
    if (num < 0)
    {
        std::cout << "Number of shares purchased can't be negative. "
                    << "Transaction is aborted.\n";
    } else {
        shares += num;
        share_val = price;
        set_tol();
    }
}

void Stock::sell(long num, double price) {
    using std::cout;
    if (num < 0)
    {
        cout << "Number of shares sell can't be negative. "
            << "Transaction is aborted.\n";
    } else if (num > shares)
    {
        cout << "You can't sell more than you have! "
            << "Transaction is aborted.\n";
    } else {
        shares -= num;
        share_val = price;
        set_tol();
    }   
}

void Stock::update(double price) {
    share_val = price;
    set_tol();
}

std::ostream & operator<<(std::ostream & os, const Stock & s) {
    std::ios_base::fmtflags orig = os.setf(std::ios_base::fixed, std::ios_base::floatfield);
    std::streamsize prec = os.precision(3);
    os << "Company: " << s.company
        << "    Shares: " << s.shares << '\n'
        << "    Share Price: $" << s.share_val;
    os.precision(2);
    os << "    Total Worth: $" << s.total_val << '\n';
    os.setf(orig, std::ios_base::floatfield);
    os.precision(prec);
    return os;
}

const Stock & Stock::topval(const Stock & s) const {
    if (s.total_val > total_val)
    {
        return s;
    } else {
        return *this;
    }
}