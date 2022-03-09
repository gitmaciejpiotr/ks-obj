#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <vector>
#include <windows.h>
#include <fstream>
#include <cstdlib>

#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "PlikTekstowy.h"


using namespace std;

class PlikZAdresatami : public PlikZDanymi
{
    const string NAZWA_PLIKU_Z_ADRESATAMI;
    MetodyPomocnicze metodyPomocnicze;
    int idOstatniegoAdresata;
    fstream plikTekstowy;

    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);

public:

    PlikZAdresatami(string nazwaPlikuZAdresatami = "Adresaci.txt") : NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami), PlikZDanymi(nazwaPlikuZAdresatami)
    {
        idOstatniegoAdresata = 0;
    };
    int pobierzZPlikuIdOstatniegoAdresata();
    bool dopiszAdresataDoPliku(Adresat adresat);
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdOstatniegoAdresata();
    void usunWybranaLinieWPliku(Adresat adresat);
    int zwrocNumerLiniiSzukanegoAdresata(int idAdresata);
    void usunPlik(string nazwaPlikuZRozszerzeniem);
    void zmienNazwePliku(string staraNazwa, string nowaNazwa);
    void edytujDaneAdresataWPliku(string liniaZDanymiAdresataOddzielonePionowymiKreskami, Adresat adresat);
};

#endif
