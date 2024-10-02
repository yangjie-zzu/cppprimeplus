#include "sales.h"

int main() {
    SALES::Sales s;
    SALES::Sales s1;
    const double ar[2] = {512.1, 245.3};
    SALES::setSales(s, ar, 2);
    SALES::setSales(s1);
    SALES::showSales(s);
    SALES::showSales(s1);
    return 0;
}