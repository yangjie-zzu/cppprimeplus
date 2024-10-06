#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vect.h"

int main() {
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    unsigned int n;
    int i = 0;
    unsigned long total = 0;
    unsigned long max = 0;
    unsigned long min = 0;
    cout << "Enter test times: ";
    cin >> n;
    while (i < n)
    {
        cout << "Enter target distance (q to quit): ";
        cin >> target;
        cout << "Enter step length: ";
        cin >> dstep;
        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps ++;
        }

        total += steps;
        if (i > 0)
        {
            if (max < steps)
            {
                max = steps;
            }
            if (min > steps)
            {
                min = steps;
            }
        } else {
            max = steps;
            min = steps;
        }
        cout << "After " << steps << " steps, the subject "
                "has the following location:\n";
        cout << result << endl;
        result.polar_mode();
        cout << "or\n" << result << endl;
        cout << "Average outward distance per step = "
                << result.magval() / steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        i ++;
    }
    cout << "average: " << total / i << ", max: " << max << ", min: " << min << endl;
    cout << "Bye\n";
    cin.clear();
    while ((cin.get()) != '\n')
    {
        continue;
    }
    return 0;
}