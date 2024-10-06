#ifndef COMPLEX0_H_
#define COMPLEX0_H_
#include <iostream>

class complex {
    private:
        double real;
        double imaginary;
    public:
        complex(double r, double i);
        complex() {
            real = imaginary = 0;
        }
        complex operator+(const complex & c) const;
        complex operator-(const complex & c) const;
        complex operator*(const complex & c) const;
        complex operator*(double mult) const;
        friend complex operator*(double mult, const complex & c) {
            return c * mult;
        }
        complex operator~() const;
        friend std::ostream & operator<<(std::ostream & os, const complex & c);
        friend std::istream & operator>>(std::istream & is, complex & c);
};

#endif