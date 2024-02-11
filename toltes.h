#ifndef TOLTES_H
#define TOLTES_H

#include "toltes.h"
#include "hely.h"

class Toltes {
protected:
    int tomeg;
    int toltes;
    Hely hely;
    bool rogzitett;
public:

    //getterek
    Hely gethely(){ return hely; };
    double gettomeg() { return tomeg; };
    double gettoltes() { return toltes; };
    bool getrogzitett() { return rogzitett; };


    //setterek
    void sethely(Hely h) { hely = h;}
    void settoltes(int tolt) { toltes = tolt;}
    void setrogzitett(bool b) { rogzitett = b;}


    //operatorok
    Toltes& operator=(const Toltes& rhs);

    static Hely mozog(Toltes** t, int db, Hely hely, int tomeg, int toltes);

    virtual Hely leptet(Toltes** t, int db)=0;
    virtual ~Toltes() {};
};

std::ostream& operator<<(std::ostream& os, Toltes* t);

class Elektron: public Toltes {
public:
    Hely leptet(Toltes** t, int db);
};

class Proton : public Toltes {
public:
    Hely leptet(Toltes** t, int db);
};

class Neutron : public Toltes {
public:
    Hely leptet(Toltes** t, int db);
};

class Bozon : public Toltes {
public:
    Hely leptet(Toltes** t, int db);
};

#endif 