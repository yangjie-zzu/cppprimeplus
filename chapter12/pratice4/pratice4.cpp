#include "stack.h"
#include <iostream>

int main() {
    {
        Stack s1;
        Stack s2(3);
        Stack s3(s2);
        Stack s4;
        s3.push(1);
        s3.push(2);
        s3.push(3);
        s4 = s3;
        std::cout << "s1: empty: " << s1.isempty() << ", full: " << s1.isfull() << std::endl;
        std::cout << "s2: empty: " << s2.isempty() << ", full: " << s2.isfull() << std::endl;
        std::cout << "s3: empty: " << s3.isempty() << ", full: " << s3.isfull() << std::endl;
        std::cout << "s4: empty: " << s4.isempty() << ", full: " << s4.isfull() << std::endl;
    }
}