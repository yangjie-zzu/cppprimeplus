#include <iostream>
#include <cstring>
#include "cow.h"

Cow::Cow() {
    name[0] = '\0';
    hobby = new char[20];
    hobby[0] = '\0';
    weight = 0;
}

Cow::Cow(const char * nm, const char * ho, double wt) {
    std::strcpy(name, nm);
    name[19] = '\0';
    hobby = new char[20];
    std::strcpy(hobby, ho);
    hobby[19] = '\0';
    weight = wt;
}

Cow::Cow(const Cow & c) {
    std::strcpy(name, c.name);
    hobby = new char[20];
    std::strcpy(hobby, c.hobby);
    weight = c.weight;
}

Cow::~Cow() {
    delete [] hobby;
}

Cow & Cow::operator=(const Cow & c) {
    std::strcpy(name, c.name);
    delete [] hobby;
    hobby = new char[20];
    std::strcpy(hobby, c.hobby);
    weight = c.weight;
    return *this;
}

void Cow::ShowCow() const {
    std::cout << name << ", " << hobby << ", " << weight;
}