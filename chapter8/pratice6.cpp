#include <iostream>
#include <cstring>

template <typename T>
T maxn(T * ary, int n);

template <>
char * maxn(char ** ary, int n);

int main() {
    int a[] = {1, 2, 3, 4, 5, 6};
    double b[] = {1.1, 2.2, 3.3, 4.4};
    char * s[] = {"a", "aa", "aaa", "bbbb", "acccc"};
    std::cout << maxn(a, 6) << std::endl;
    std::cout << maxn(b, 4) << std::endl;
    std::cout << maxn(s, 5) << std::endl;
    return 0;
}

template <typename T>
T maxn(T * ary, int n) {
    T max = ary[0];
    for (int i = 1; i < n; i++)
    {
        if (ary[i] > max)
        {
            max = ary[i];
        }
    }
    return max;
}

template <>
char * maxn<char *>(char ** ary, int n) {
    char * max = ary[0];
    for (int i = 0; i < n; i++)
    {
        if (strlen(ary[i]) > strlen(max))
        {
            max = ary[i];
        }
    }
    return max;
}