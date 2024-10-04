#include <iostream>
#include "plorg.h"
#include <cstring>

Plorg::Plorg(const char * n, int c) {
    strcpy(this->name, n);
    ci = c;
}

void Plorg::show() const {
    std::cout << name << ": " << ci << std::endl;
}

void Plorg::update(int c) {
    ci = c;
}