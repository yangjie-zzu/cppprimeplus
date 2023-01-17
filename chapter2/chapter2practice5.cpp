#include <iostream>

double celToFah(double);

int main()
{
    using namespace std;
    cout << "Please enter a Celsius value: ";
    double celsius;
    cin >> celsius;
    cout << celsius << " degrees Celsius is " << celToFah(celsius) << " degrees Fahrenheit." << endl;
    return 0;
}

double celToFah(double celsius)
{
    return celsius * 1.8 + 32.0;
}