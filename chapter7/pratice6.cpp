#include <iostream>

int fill_array(double ary[], int limit);

void show_array(double ary[], int n);

void reverse_array(double ary[], int i, int j);

int main() {
    double ary[20];
    int n = fill_array(ary, 20);
    show_array(ary, n);
    reverse_array(ary, 0, n - 1);
    show_array(ary, n);
    reverse_array(ary, 1, n - 2);
    show_array(ary, n);
}

int fill_array(double ary[], int limit) {
    std::cout << "请输入最多" << limit << "个数字：" << std::endl;
    int i;
    for (i = 0; i < limit; i++)
    {
        double temp;
        std::cin >> temp;
        if (!std::cin)
        {
            break;
        }
        ary[i] = temp;
    }
    return i;
}

void show_array(double ary[], int n) {
    for (int i = 0; i < n; i++)
    {
        std::cout << ary[i];
        if (i < n - 1)
        {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;
}

void reverse_array(double ary[], int i, int j) {
    double temp;
    while (i < j)
    {
        temp = ary[i];
        ary[i] = ary[j];
        ary[j] = temp;
        i ++;
        j --;
    }
    
}