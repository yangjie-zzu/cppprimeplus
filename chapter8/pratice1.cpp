#include<iostream>

int call_count = 0;

void print_str(const char  * str, int a = 0);

int main() {
    print_str("abc");
    print_str("123", 0);
    print_str("中文", 1);
    return 0;
}

void print_str(const char * str, int a) {
    call_count += 1;
    if (a != 0)
    {
        for (int i = 0; i < call_count; i++)
        {
            std::cout << str << std::endl;
        }
    } else {
        std::cout << str << std::endl;
    }
    std::cout << std::endl;
}