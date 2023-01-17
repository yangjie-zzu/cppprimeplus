#include <iostream>

int main()
{
    using namespace std;
    long time;
    cout << "Enter the number of seconds: ";
    cin >> time;
    const int hours_per_day = 24;
    const int minutes_per_hour = 60;
    const int seconds_per_minute = 60;
    const int seconds_per_hour = seconds_per_minute * minutes_per_hour;
    const int seconds_per_day = seconds_per_hour * hours_per_day;
    cout << time << " seconds = " << time / seconds_per_day << " days, ";
    cout << (time % seconds_per_day) / seconds_per_hour << " hours, ";
    cout << (time % seconds_per_hour) / seconds_per_minute << " minutes, ";
    cout << time % seconds_per_minute << " seconds";
    return 0;
}