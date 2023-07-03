#include <iostream>

int fill(double ary[], int n);

void show_ary(double ary[], int n);

double avg(double ary[], int n);

int main() {
    double ary[10];
    int size = fill(ary, 10);
    show_ary(ary, size);
    std::cout << avg(ary, size) << std::endl;
}

int fill(double ary[], int n) {
    double temp;
    int i;
    for (i = 0; i < n; i++)
    {
        std::cin >> temp;
        if (temp >= 0)
        {
            ary[i] = temp;
        } else {
            break;
        }
        
    }
    return i;
}

void show_ary(double ary[], int n) {
    for (int i = 0; i < n; i++)
    {
        std::cout << ary[i] << std::endl;
    }
}

double avg(double ary[], int n) {
    double total = 0;
    for (int i = 0; i < n; i++)
    {
        total += ary[i];
    }
    return total / n;
}