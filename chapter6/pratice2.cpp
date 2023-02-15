#include <iostream>

int main() {

    double a[10];

    int i = 0;
    while (i++ < 10 && std::cin >> a[i]);
    double sum = 0;
    for (int j = 0; j < i; j ++) {
        sum += a[j];
    }
    double avg = sum / i;
    int count = 0;
    for (int j = 0; j < i; j ++) {
        if (a[j] > avg)
        {
            count ++;
        }
    }
    std::cout << "平均值：" << avg << std::endl << "大于平均值：" << count << std::endl;
}