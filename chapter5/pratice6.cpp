#include <iostream>

int main()
{
    const char *monthies[12] = {
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

    int sales[3][12];
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        int yearSum = 0;
        for (int j = 0; j < 12; j++)
        {
            std::cout << "请输入第" << i + 1 << "年" << monthies[j] << "销量：";
            std::cin >> sales[i][j];
            yearSum += sales[i][j];
        }
        std::cout << "第" << i + 1 << "年" << "销售量：" << yearSum << std::endl;
        sum += yearSum;
    }
    std::cout << "全年销售：" << sum << std::endl;
}