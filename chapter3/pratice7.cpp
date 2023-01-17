#include <iostream>

int main()
{
    using namespace std;
    double europeFuelConsumption;
    cout << "Enter the fuel consumption for europe: ";
    cin >> europeFuelConsumption;
    cout << europeFuelConsumption << "/100km = " << int(62.14 / (europeFuelConsumption / 3.875)) << "mpg.";
    return 0;
}