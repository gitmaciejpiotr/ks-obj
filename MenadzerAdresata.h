#ifndef MENADZERADRESATA_H
#define MENADZERADRESATA_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Adresat.h"
#include "PlikZAdresatami.h"

using namespace std;

class MenadzerAdresata
{
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    Adresat adresat;
    PlikZAdresatami plikZAdresatami;
    MetodyPomocnicze metodyPomocnicze;
    vector <Adresat> adresaci;

    string wczytajLinie();
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);

public:

    void wyswietlWszystkichAdresatow();
    void wyswietlDaneAdresata(Adresat adresa);
    Adresat podajDaneNowegoAdresata();
    Adresat pobierzDaneAdresata();
    void dodajAdresata();
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);
    int podajIdWybranegoAdresata();
    int zwrocNumerLiniiSzukanegoAdresata(int idAdresata);
    int usunAdresata();
    void edytujAdresata();
    char wybierzOpcjeZMenuEdycja();
    void zaktualizujDaneWybranegoAdresata(Adresat adresat);
    int znajdzNumerAdresataOPodanymIDWWektorze(int idAdresata);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    MenadzerAdresata(int idZalogowanegoUzytkownika = 0) : ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika)
    {
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    }
};

#endif
