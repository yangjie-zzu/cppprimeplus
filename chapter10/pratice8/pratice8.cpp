#include <iostream>
#include "list.h"

void printItem(Item & item) {
    std::cout << item << " ";
}

void printList(List & list) {
    std::cout << "empty: " << list.isempty() << " full: " << list.isfull() << " items: ";
    list.visit(printItem);
    std::cout << std::endl;
}

int main() {
    List l;
    printList(l);
    l.add("test");
    printList(l);
    l.add("test1");
    printList(l);
}