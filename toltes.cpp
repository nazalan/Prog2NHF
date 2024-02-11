#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <math.h>

#include "toltes.h"
#include "hely.h"

Toltes& Toltes:: operator=(const Toltes& rhs) {
    return *this;
}

std::ostream& operator<<(std::ostream& os, Toltes *t) {
    return os;
}



Hely Toltes::mozog(Toltes** t, int db, Hely hely, int tomeg, int toltes) {//ezt a fv-t hivja meg az osszes alosztaly, amikor mar csak az uj pozicio kiszamolasa van hatra
    Hely elmozdulas = hely;
    return elmozdulas;
}



//a sajat tulajdonsagaikkal egybevetve lepnek a megfelelo reszecskek
Hely Elektron::leptet(Toltes** t, int db) {
    return Hely();
}

Hely Proton::leptet(Toltes** t, int db) {
    return Hely();
}

Hely Neutron::leptet(Toltes** t, int db) {
    return Hely();
}

Hely Bozon::leptet(Toltes** t, int db) {
    return Hely();
}
