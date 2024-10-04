#include <iostream>
#include "account.h"

Account::Account() {
    name = "no name";
    account = "no account";
    money = 0;
}

Account::Account(const std::string & n, const std::string & a, long m) {
    name = n;
    account = a;
    if (m < 0)
    {
        money = 0;
    } else {
        money = m;
    }
}

void Account::show() const {
    std::cout << "name: " << name
        << "\naccount: " << account
        << "\nmoney: $" << money << std::endl;
}

void Account::deposit(long m) {
    if (m > 0)
    {
        money += m;
    }
}

void Account::take(long m) {
    if (m > 0 && m <= money)
    {
        money -= m;
    }
}