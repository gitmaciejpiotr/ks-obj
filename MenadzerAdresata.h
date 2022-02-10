#ifndef MENADZERADRESATA_H
#define MENADZERADRESATA_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

//#include "Adresat.h"
#include "PlikZAdresatami.h"
//#include "MetodyPomocnicze.h"

using namespace std;

class MenadzerAdresata
{
    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    Adresat adresat;
    PlikZAdresatami plikZAdresatami;
    MetodyPomocnicze metodyPomocnicze;
    vector <Adresat> adresaci;

    string wczytajLinie();
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);

public:

    MenadzerAdresata(int IDUZYTKOWNIKA) : idZalogowanegoUzytkownika(IDUZYTKOWNIKA){};
    void wyswietlWszystkichAdresatow();
    void wyswietlDaneAdresata();
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);
    Adresat pobierzDaneAdresata();
    int dodajAdresata(int idZalogowanegoUzytkownika);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami();
    int wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika, vector <Adresat> adresaci);
};

#endif
