#include <iostream>
#include <iomanip>

#include "memtrace.h"
#include "toltes.h"
#include "mezo.h"


int main()
{
    Mezo ter;

    ter.adatok_beolvasasa();//beolvassa a fajlbol az adatokat

    ter.leptetes();//a reszecskek elmozdulnak a vegleges pozicioba

    ter.adatok_kiirasa(true);//az uj adatok kiirodnak egy fajlba

    return 0;
}
