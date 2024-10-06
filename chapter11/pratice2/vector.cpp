#include <cmath>
#include "vect.h"

using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR {
    const double Rad_to_deg = 45.0 / atan(1.0);

    Vector::Vector() {
        x = y = 0.0;
        mode = RECT;
    }

    Vector::Vector(double n1, double n2, Mode form) {
        mode = form;
        x = n1;
        y = n2;
    }

    void Vector::reset(double n1, double n2, Mode form) {
        mode = form;
        x = n1;
        y = n2;
    }

    Vector::~Vector() {

    }

    double Vector::magval() const {
        return sqrt(x * x + y * y);
    }

    double Vector::angval() const {
        if (x == 0.0 && y == 0.0)
        {
            return 0.0;
        } else {
            return atan2(y, x);
        }
    }

    void Vector::polar_mode() {
        mode = POL;
    }

    void Vector::rect_mode() {
        mode = RECT;
    }

    Vector Vector::operator+(const Vector & b) const {
        return Vector(x + b.x, y + b.y);
    }

    Vector Vector::operator-(const Vector & b) const {
        return Vector(x - b.x, y - b.y);
    }

    Vector Vector::operator-() const {
        return Vector(-x, -y);
    }

    Vector Vector::operator*(double n) const {
        return Vector(x * n, y * n);
    }

    Vector operator*(double n, const Vector & a) {
        return a * n;
    }

    std::ostream & operator<<(std::ostream & os, const Vector & v) {
        if (v.mode == Vector::RECT)
        {
            os << "(x,y) = (" << v.x << ", " << v.y << ")";
        } else if (v.mode == Vector::POL)
        {
            os << "(m,a) = (" << v.magval() << ", "
                << v.angval() * Rad_to_deg << ")";
        } else {
            os << "Vector object mode is invalid";
        }
        return os;
    }
}