#include <iostream>
#include "person.h"

int main() {
    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy", "Sam");
    one.Show();
    std::cout << std::endl;
    one.FormalShow();
    std::cout << std::endl;
    two.Show();
    std::cout << std::endl;
    two.FormalShow();
    std::cout << std::endl;
    three.Show();
    std::cout << std::endl;
    three.FormalShow();
    std::cout << std::endl;
    return 0;
}