#include <iostream>

int main()
{
    using namespace std;
    int inch;
    int feet;
    int lb;
    cout << "your height is ___ feet\b\b\b\b\b\b\b\b";
    cin >> feet;
    cout << ", ___ inch\b\b\b\b\b\b\b\b";
    cin >> inch;
    cout << "your weight is ___ lbs\b\b\b\b\b\b\b";
    cin >> lb;
    int inch_per_feet = 12;
    double mileas_per_inch = 0.0254;
    double lb_per_kilogram = 2.2;
    double height = ((feet * inch_per_feet) + inch) * mileas_per_inch;
    cout << "your body mass index is " << lb / lb_per_kilogram / (height * height);
    return 0;
}