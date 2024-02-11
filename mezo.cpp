#include <iostream>
#include <iomanip>
#include <fstream>

#include "memtrace.h"
#include "mezo.h"
#include "toltes.h"

void Mezo::add(Toltes* t) {//toltes hozzadasa a heterogen kollekciohoz
}


void Mezo::adatok_beolvasasa(){//itt valosul meg a fajlekezeles es a kollekcio feltoltese
}

bool Mezo::elmozdultak(Toltes** t, Hely* h, int db) {//egy fv, ami vizsgalja a korokben, hogy beallt e az egyensulyi helyzet vagy sem
    return false;
}

void Mezo::utkozesek(Toltes** t, int db) {//mivel a toltesek rogzitette valnak, ha utkoznek, az azono pozicioba keruloket vizsgalni kell minden korben
}

void Mezo::leptetes(){//itt tortenik az utkozesek, elmozdulasok vizsgalata es ennek megfeleloen valtozik a pozicio
}



void Mezo::adatok_kiirasa(bool van_bemenet){//a tolteseket a megfelelo sorrrendben visszairjuk egy fajlba
}

Mezo::~Mezo() {//virtualis destruktor, ami majd a felszabaditast vegzi
}
