#include "stack.h"

Stack::Stack(int n) {
    pitems = new Item[n];
    size = n;
    top = 0;
}

Stack::Stack(const Stack & st) {
    pitems = new Item[st.size];
    size = st.size;
    for (int i = 0; i < size; i++)
    {
        pitems[i] = st.pitems[i];
    }
    top = st.top;
}

Stack::~Stack() {
    delete [] pitems;
}

bool Stack::isempty() const {
    return top == 0;
}

bool Stack::isfull() const {
    return top == size;
}

bool Stack::push(const Item & item) {
    if (top == size)
    {
        return false;
    }
    pitems[top ++] = item;
    return true;
}

bool Stack::pop(Item & item) {
    if (top == 0)
    {
        return false;
    }
    item = pitems[--top];
    return true;
}

Stack & Stack::operator=(const Stack & st) {
    delete [] pitems;
    pitems = new Item[st.size];
    size = st.size;
    for (int i = 0; i < size; i++)
    {
        pitems[i] = st.pitems[i];
    }
    top = st.top;
    return *this;
}