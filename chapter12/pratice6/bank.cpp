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
    double perhour = 1000;
    long line_wait = 0;
    long served = 0;
    do
    {
        perhour --;
        Queue line(qs);
        Queue line2(qs);
        double min_per_cust;
        min_per_cust = MIN_PER_HR / perhour;
        Item temp;
        long turnaways = 0;
        long customers = 0;
        served = 0;
        long sum_line = 0;
        int wait_time = 0;
        int wait_time2 = 0;
        line_wait = 0;
        for (int cycle = 0; cycle < cyclelimit; cycle++)
        {
            if (newcustomer(min_per_cust))
            {
                if (line.isfull() && line2.isfull())
                {
                    turnaways++;
                }
                else
                {
                    Queue * l;
                    if (line.queuecount() <= line2.queuecount())
                    {
                        l = &line;
                    } else {
                        l = &line2;
                    }
                    customers++;
                    temp.set(cycle);
                    l -> enqueue(temp);
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
            if (wait_time2 <= 0 && !line2.isempty())
            {
                line2.dequeue(temp);
                wait_time2 = temp.ptime();
                line_wait += cycle - temp.when();
                served++;
            }
            if (wait_time2 > 0)
            {
                wait_time2--;
            }
            sum_line += line.queuecount();
            sum_line += line2.queuecount();
        }
        if (customers > 0)
        {
            cout << "customers accepted: " << customers << endl;
            cout << "  customers served: " << served << endl;
            cout << "          turnways: " << turnaways << endl;
            cout << "average queue size: ";
            cout.precision(2);
            cout.setf(ios_base::fixed, ios_base::floatfield);
            cout << (double)sum_line / cyclelimit << endl;
            cout << " average wait time: "
                 << (double)line_wait / served << " minutes\n";
            if ((double)line_wait / served <= 1)
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