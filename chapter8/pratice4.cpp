#include <iostream>
using namespace std;
#include <cstring>
struct stringy
{
    char * str;
    int ct;
};

void set(stringy & beany, const char * str);

void show(const stringy beany, int n = 1);

void show(const char * str, int n = 1);

int main() {
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");
    return 0;
}

void set(stringy & beany, const char * str) {
    beany.str = new char[strlen(str)];
    strcpy(beany.str, str);
    beany.ct = strlen(str);
}

void show(const stringy beany, int n) {
    for (int i = 0; i < n; i++)
    {
        std::cout << beany.ct << ": " << beany.str << std::endl;
    }
}

void show(const char * str, int n) {
    for (int i = 0; i < n; i++)
    {
        std::cout << str << std::endl;
    }
}