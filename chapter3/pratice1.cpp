#include <iostream>

int main()
{
    using namespace std;
    int inch;
    const int inch_per_feet = 12;
    cout << "enter your height: ___\b\b\b";
    cin >> inch;
    cout << "your height is " << inch / inch_per_feet << " feet, " << inch % inch_per_feet << " inch.";
    return 0;
}