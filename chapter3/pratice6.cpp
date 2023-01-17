#include <iostream>

int main()
{
    using namespace std;
    int mileage;
    int oil;
    cout << "Enter the mileage: ";
    cin >> mileage;
    cout << "Enter the gallon of oil: ";
    cin >> oil;
    cout << "A gallon oil driver " << mileage / oil << " mileage.";
    return 0;
}