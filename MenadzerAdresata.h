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

    void wyswietlWszystkichAdresatow();
    void wyswietlDaneAdresata(int i);
    Adresat podajDaneNowegoAdresata();
    Adresat pobierzDaneAdresata();
    int dodajAdresata();
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami();
    int wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    MenadzerAdresata(int idUzytkownika) : idZalogowanegoUzytkownika(idUzytkownika), plikZAdresatami(idUzytkownika)
    {
        if (idZalogowanegoUzytkownika > 0)
        {
            idOstatniegoAdresata = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku();
        }
    }
};

#endif
