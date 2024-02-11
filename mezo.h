#include <iostream>

#ifndef MEZO_H
#define MEZO_H

#include "memtrace.h"
#include "mezo.h"
#include "toltes.h"

class Mezo {
    Toltes** toltesek;
    int db=0;
    int lepes;
    bool egyensuly=false;
public:
    void add(Toltes* t);

    static bool elmozdultak(Toltes** t, Hely* h, int db);
    static void utkozesek(Toltes** t, int db);

    void adatok_beolvasasa();
    void leptetes();
    void adatok_kiirasa(bool van_bemenet);

    ~Mezo();
};

#endif 
