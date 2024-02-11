#include "hely.h"

Hely& Hely:: operator=(const Hely& rhs) {
    return *this;
}

Hely Hely::operator*(double x) {
    return Hely(x * getx(), x * gety(), x * getz());
}

bool Hely::operator==(Hely rhs) {
    return false;
}

bool Hely::operator!=( Hely rhs) {
    return false;
}

Hely Hely::operator+( Hely rhs) {
    return Hely(getx() + rhs.getx(), gety() + rhs.gety(), getz() + rhs.getz());
}

std::ostream& operator<<(std::ostream& os, Hely h) {
    return os;
}

std::istream& operator>>(std::istream& is, Hely& h) {
    return is;
}


double Hely::tavolsag( Hely rhs) {//ket megadott hely kozotti tavolsagot adja vissza
    double osszeg = 0;
    return osszeg;
}


