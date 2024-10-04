#include "sales.h"

int main() {
    const double ar[2] = {512.1, 245.3};
    SALES::Sales s(ar, 2);
    SALES::Sales s1;
    s.show();
    s1.show();
    return 0;
}