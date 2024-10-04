#include "stack.h"

int main() {
    customer c1 = {"test1", 1.0};
    customer c2 = {"test2", 2.0};
    customer c3 = {"test3", 3.0};
    Stack s;
    s.push(c1);
    s.push(c2);
    s.push(c3);
    customer c;
    s.pop(c);
    s.pop(c);
    s.pop(c);
    return 0;
}