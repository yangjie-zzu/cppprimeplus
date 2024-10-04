#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include <string>
class Account
{
private:
    std::string name;
    std::string account;
    long money;
public:
    Account(const std::string & n, const std::string & a, long m);
    Account();
    void show() const;
    void deposit(long m);
    void take(long m);
};
#endif