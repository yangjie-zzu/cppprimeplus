#include <iostream>
#include <cstring>
#include <new>

struct chaff
{
    char dross[20];
    int slag;
};

char buf[200];

void fill(chaff * c, int n) {
    for (int i = 0; i < n; i++)
    {
        strcpy(c[i].dross, "test");
        c[i].slag = i;
    }
    
}

void show(chaff * c, int n) {
    for (int i = 0; i < n; i++)
    {
        std::cout << c[i].dross << ", " << c[i].slag << std::endl;
    }
    
}

int main() {
    char * buf1 = new char[200];
    chaff * c = new (buf) chaff[2];
    chaff * c1 = new (buf1) chaff[2];
    fill(c, 2);
    fill(c1, 2);
    show(c, 2);
    show(c1, 2);
    return 0;
}