#include <iostream>

int main() {
    const char * monthies[12] = {
        "一月",
        "二月",
        "三月",
        "四月",
        "五月",
        "六月",
        "七月",
        "八月",
        "九月",
        "十月",
        "十一月",
        "十二月",
    };

    int sales[12];
    int sum = 0;
    for (int i = 0; i < 12; i ++) {
        std::cout << "请输入" << monthies[i] << "销量：";
        std::cin >> sales[i];
        sum += sales[i];
    }
    std::cout << "全年销售：" << sum << std::endl;
}