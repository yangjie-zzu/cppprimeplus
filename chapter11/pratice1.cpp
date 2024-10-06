#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "vect.h"

int main() {
    using namespace std;
    using VECTOR::Vector;
    std::ofstream ofout;
    ofout.open("pratice1.txt");
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
        {
            break;
        }

        ofout << "Target Distance: " << target << ", Step Size: " << dstep << "\n";
        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            ofout << steps << ": (x,y) = (" << result.xval() << "," << result.yval() << ")\n";
            steps ++;
        }

        cout << "After " << steps << " steps, the subject "
                "has the following location:\n";
        cout << result << endl;
        result.polar_mode();
        cout << "or\n" << result << endl;
        cout << "Average outward distance per step = "
                << result.magval() / steps << endl;
        ofout << "After " << steps << " steps, the subject "
                "has the following location:\n";
        ofout << result << endl;
        result.polar_mode();
        ofout << "or\n" << result << endl;
        ofout << "Average outward distance per step = "
                << result.magval() / steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye\n";
    cin.clear();
    while ((cin.get()) != '\n')
    {
        continue;
    }
    return 0;
}