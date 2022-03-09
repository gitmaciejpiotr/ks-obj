#ifndef KSIAZKA_ADRESOWA_H
#define KSIAZKA_ADRESOWA_H

#include <iostream>

#include "MenadzerUzytkownika.h"
#include "MenadzerAdresata.h"

using namespace std;

class KsiazkaAdresowa
{
    MenadzerUzytkownika menadzerUzytkownika;
    MenadzerAdresata *menadzerAdresata;
    int idZalogowanegoUzytkownika;
    vector <Adresat> adresaci;

public:
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    int logowanieUzytkownika();
    void wylogowanieUzytkownika();
    int dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void zmianaHaslaZalogowanegoUzytkownika();
    bool czyUzytkownikJestZalogowany();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    int usunAdresata();
    void edytujAdresata();
    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();
    KsiazkaAdresowa(int idZalogowanegoUzytkownika = 0) : menadzerUzytkownika(idZalogowanegoUzytkownika)
    {
        menadzerAdresata = NULL;
    };
    ~KsiazkaAdresowa()
    {
        delete menadzerAdresata;
        menadzerAdresata = NULL;
    };
};

#endif
