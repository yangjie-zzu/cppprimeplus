#include <iostream>

template <typename T>
T max5(T * ary);

int main() {
    int a[] = {1, 2, 3, 4, 5};
    std::cout << max5(a) << std::endl;
    double b[] = {1.0, 2.0, 3.0, 4.0, 5.1};
    std::cout << max5(b) << std::endl;
}

template <typename T>
T max5(T * ary) {
    T max = ary[0];
    for (int i = 1; i < 5; i++)
    {
        if (ary[i] > max)
        {
            max = ary[i];
        }
    }
    return max;
}