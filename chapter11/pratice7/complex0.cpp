#include "complex0.h"

complex::complex(double r, double i) {
    real = r;
    imaginary = i;
}

complex complex::operator+(const complex & c) const {
    complex result;
    result.real = real + c.real;
    result.imaginary = imaginary + c.imaginary;
    return result;
}

complex complex::operator-(const complex & c) const {
    complex result;
    result.real = real - c.real;
    result.imaginary = imaginary - c.imaginary;
    return result;
}

complex complex::operator*(const complex & c) const {
    complex result;
    result.real = real * c.real - imaginary * c.imaginary;
    result.imaginary = real * c.imaginary + imaginary * c.real;
    return result;
}

complex complex::operator*(double mult) const {
    complex result;
    result.real *= mult;
    result.imaginary *= mult;
    return result;
}

complex complex::operator~() const {
    complex result;
    result.real = real;
    result.imaginary = -imaginary;
    return result;
}

std::ostream & operator<<(std::ostream & os, const complex & c) {
    os << "(" << c.real << ", " << c.imaginary << "i)";
    return os;
}

std::istream & operator>>(std::istream & is, complex & c) {
    std::cout << "real: ";
    is >> c.real;
    if (is)
    {
        std::cout << "imaginary: ";
        is >> c.imaginary;
    }
    return is;
}