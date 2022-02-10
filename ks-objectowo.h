#ifndef KS-OBJECTOWO_H
#define KS-OBJECTOWO_H

#include <iostream>

#include "MenadzerUzytkownika.h"
#include "MenadzerAdresata.h"

using namespace std;

class KsiazkaAdresowa
{
    MenadzerUzytkownika menadzerUzytkownika;
    MenadzerAdresata menadzerAdresata;

public:
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    int logowanieUzytkownika();
    int dodajAdresata(int idZalogowanegoUzytkownika);
    void zmianaHaslaZalogowanegoUzytkownika();
    KsiazkaAdresowa();
};

#endif
