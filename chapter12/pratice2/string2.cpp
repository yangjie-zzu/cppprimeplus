#include <cstring>
#include "string2.h"
#include <cctype>

using std::cout;
using std::cin;

int String::num_strings = 0;

int String::HowMany() {
    return num_strings;
}

String::String(const char * s) {
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings ++;
}

String::String() {
    len = 0;
    str = new char[1];
    str[0] = '\0';
    num_strings ++;
}

String::String(const String & st) {
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    num_strings ++;
}

String::~String() {
    delete [] str;
    num_strings --;
}

String & String::operator=(const String & st) {
    if (this == &st)
    {
        return *this;
    }
    delete [] str;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    return *this;
}

String & String::operator=(const char * s) {
    delete [] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}

char & String::operator[](int i) {
    return str[i];
}

const char & String::operator[](int i) const {
    return str[i];
}

bool operator<(const String & st1, const String & st2) {
    return strcmp(st1.str, st2.str) < 0;
}

bool operator>(const String & st1, const String & st2) {
    return st2 < st1;
}

bool operator==(const String & st1, const String & st2) {
    return strcmp(st1.str, st2.str) == 0;
}

ostream & operator<<(ostream & os, const String & st) {
    os << st.str;
    return os;
}

istream & operator>>(istream & is, String & st) {
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is)
    {
        st = temp;
    }
    while (is && is.get() != '\n')
    {
        continue;
    }
    return is;
}

String operator+(const String & st1, const String & st2) {
    int len = st1.len + st2.len;
    char * st = new char[len + 1];
    for (int i = 0; i <= st1.len; i++)
    {
        st[i] = st1[i];
    }
    for (int i = 0; i <= st2.len; i++)
    {
        st[st1.len + i] = st2[i];
    }
    st[len] = '\0';
    return String(st);
}

void String::stringlow() {
    for (int i = 0; i < len; i++)
    {
        str[i] = std::tolower(str[i]);
    }
}

void String::stringup() {
    for (int i = 0; i < len; i++)
    {
        str[i] = std::toupper(str[i]);
    }
}

int String::has(const char c) const {
    int total = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == c)
        {
            total ++;
        }
    }
    return total;
}