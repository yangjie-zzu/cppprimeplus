#include "account.h"

int main() {
    Account account("test", "test1", 3);
    account.show();
    account.deposit(100);
    account.show();
    account.take(500);
    account.show();
    account.take(50);
    account.show();
    return 0;
}