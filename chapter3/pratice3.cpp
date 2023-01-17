#include <iostream>

int main()
{
    using namespace std;
    int degrees;
    int minutes;
    int seconds;
    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
    cout << "First, enter the degrees: ";
    cin >> degrees;
    cout << "Next, enter the minutes of arc: ";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc: ";
    cin >> seconds;
    const int minutes_per_degrees = 60;
    const int seconds_per_minutes = 60;
    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << degrees + minutes / (double)minutes_per_degrees + seconds / (double)seconds_per_minutes / (double)minutes_per_degrees;
    return 0;
}