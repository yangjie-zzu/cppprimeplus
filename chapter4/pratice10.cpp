#include <iostream>
#include <array>

int main() {
    std::array<float, 3> a;
    std::cout << "请输入3次40米跑成绩：" << std::endl;
    std::cin >> a[0] >> a[1] >> a[2];
    std::cout << "次数：" << a.size() << std::endl
    << "平均成绩" << ((a[0] + a[1] + a[2]) / a.size()) << std::endl;
}