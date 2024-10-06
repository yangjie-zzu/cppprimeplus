#include <iostream>
#include "stonewt1.h"

int main() {
    using std::cout;
    Stonewt popping(9, 2.8);
    double p_wt = popping;
    cout << "Convert to double => ";
    cout << "Popping: " << p_wt << " pounds.\n";
    cout << "Convert to int => ";
    cout << "Popping: " << int (popping) << " pounds.\n";
    return 0;
}