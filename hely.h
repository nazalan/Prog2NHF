#include <iostream>

#ifndef HELY_H
#define HELY_H

#include "hely.h"

 class Hely {
    int x;
    int y;
    int z;
public:
    Hely(int x0 = 0, int y0 = 0, int z0 = 0) : x(x0), y(y0), z(z0) {}
    Hely& operator=(const Hely& rhs);
    Hely operator*(double x);

    //getterek
    int getx() {return x;}
    int gety() {return y;}
    int getz() {return z;}

    //operatorok
    bool operator==( Hely rhs);
    bool operator!=(Hely rhs);
    Hely operator+(Hely rhs);


    double tavolsag(Hely rhs);
};


 std::ostream& operator<<(std::ostream& os, Hely m);
 std::istream& operator>>(std::istream& is, Hely& m);

#endif 