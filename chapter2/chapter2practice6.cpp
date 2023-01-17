#include <iostream>

double resolveLightYears(double);

int main()
{
    using namespace std;

    cout << "Enter the number of light years: ";
    double lightYears;
    cin >> lightYears;
    cout << lightYears << " light years = " << resolveLightYears(lightYears) << " astronomical units." << endl;
    return 0;
}

double resolveLightYears(double lightYears)
{
    return lightYears * 63240;
}