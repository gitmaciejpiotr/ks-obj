#ifndef KS-OBJECTOWO_H
#define KS-OBJECTOWO_H

#include <iostream>

#include "MenadzerUzytkownika.h"

using namespace std;

class KsiazkaAdresowa
{
    MenadzerUzytkownika menadzerUzytkownika;
    int idZalogowanegoUzytkownika;
    vector <Adresat> adresaci;

public:
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    int logowanieUzytkownika(int idZalogowanegoUzytkownika);
    int dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void zmianaHaslaZalogowanegoUzytkownika();
    KsiazkaAdresowa(int idZalogowanegoUzytkownika = 0) : menadzerUzytkownika(idZalogowanegoUzytkownika)
    {
        menadzerUzytkownika.wczytajUzytkownikowZPliku();
    }
};

#endif
