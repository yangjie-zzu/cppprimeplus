#include <iostream>
#include "mytime3.h"

Time::Time() {
    hours = minutes = 0;
}

Time::Time(int h, int m) {
    hours = h;
    minutes = m;
}

void Time::AddMin(int m) {
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time::AddHr(int h) {
    hours += h;
}

void Time::Reset(int h, int m) {
    hours = h;
    minutes = m;
}

Time operator+(const Time & t1, const Time & t2) {
    Time sum;
    sum.minutes = t1.minutes + t2.minutes;
    sum.hours = t1.hours + t2.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

Time operator-(const Time & t1, const Time & t2) {
    Time diff;
    int tot1, tot2;
    tot1 = t2.minutes + t2.hours * 60;
    tot2 = t1.minutes + t1.hours * 60;
    diff.minutes = (tot2 - tot1) % 60;
    diff.hours = (tot2 - tot1) / 60;
    return diff;
}

Time operator*(const Time & t, double mult) {
    Time result;
    long totalminutes = t.hours * 60 * mult + t.minutes * mult;
    result.minutes = totalminutes % 60;
    result.hours = totalminutes / 60;
    return result;
}

std::ostream & operator<<(std::ostream & os, const Time & t) {
    os << t.hours << " hours, " << t.minutes << " minutes";
    return os;
}
