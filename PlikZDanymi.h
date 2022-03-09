#ifndef PLIKZDANYMI_H
#define PLIKZDANYMI_H

#include <vector>
#include <windows.h>
#include <fstream>
#include <cstdlib>


using namespace std;


class PlikZDanymi {

    const string NAZWA_PLIKU;

public:

    bool czyPlikJestPusty();
    string pobierzNazwePliku();
    PlikZDanymi(string nazwaPliku) : NAZWA_PLIKU(nazwaPliku) {
    }
};

#endif
