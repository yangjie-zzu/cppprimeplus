#include <iostream>
#include <cstdlib>
#include <ctime>
#include "queue.h"

const int MIN_PER_HR = 60;

bool newcustomer(double x);

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ios_base;
    std::srand(std::time(0));
    cout << "Case Study: Bank of Heather Automatic Teller\n";
    cout << "Enter maximum size of queue: ";
    int qs;
    cin >> qs;
    cout << "Enter the number of simulation hours: ";
    int hours;
    cin >> hours;
    long cyclelimit = MIN_PER_HR * hours;
    double perhour = 100;
    long line_wait = 0;
    long served = 0;
    do
    {
        Queue line(qs);
        perhour --;
        double min_per_cust = MIN_PER_HR / perhour;
        Item temp;
        long turnaways = 0;
        long customers = 0;
        long sum_line = 0;
        int wait_time = 0;
        line_wait = 0;
        served = 0;
        for (int cycle = 0; cycle < cyclelimit; cycle++)
        {
            if (newcustomer(min_per_cust))
            {
                if (line.isfull())
                {
                    turnaways++;
                }
                else
                {
                    customers++;
                    temp.set(cycle);
                    line.enqueue(temp);
                }
            }
            if (wait_time <= 0 && !line.isempty())
            {
                line.dequeue(temp);
                wait_time = temp.ptime();
                line_wait += cycle - temp.when();
                served++;
            }
            if (wait_time > 0)
            {
                wait_time--;
            }
            sum_line += line.queuecount();
        }
        if (customers > 0)
        {
            cout << perhour << endl;
            cout << "customers accepted: " << customers << endl;
            cout << "  customers served: " << served << endl;
            cout << "          turnways: " << turnaways << endl;
            cout << "average queue size: ";
            cout.precision(2);
            cout.setf(ios_base::fixed, ios_base::floatfield);
            cout << (double)sum_line / cyclelimit << endl;
            cout << " average wait time: "
                 << (double)line_wait / served << " minutes\n";
            if (line_wait / served < 1)
            {
                break;
            }
            
        }
        else
        {
            cout << "No customers!\n";
        }
    } while (perhour > 0);
    cout << "perhour: " << perhour << endl;
    cout << "Done!\n";
    return 0;
}

bool newcustomer(double x)
{
    return (std::rand() * x / RAND_MAX < 1);
}