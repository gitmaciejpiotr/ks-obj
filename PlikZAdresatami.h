#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <vector>
#include <windows.h>
#include <fstream>
#include <cstdlib>

#include "Adresat.h"
#include "MetodyPomocnicze.h"


using namespace std;

class PlikZAdresatami
{
    string nazwaPlikuZAdresatami;
    fstream plikTekstowy;
    MetodyPomocnicze metodyPomocnicze;
    int idOstatniegoAdresata;
    int idZalogowanegoUzytkownika;

    string konwerjsaIntNaString(int liczba);
    string pobierzLiczbe(string tekst, int pozycjaZnaku);
    int konwersjaStringNaInt(string liczba);
    bool czyPlikJestPusty();
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);

public:

    vector <Adresat> adresaci;
    PlikZAdresatami(int idUzytkownika) : idZalogowanegoUzytkownika(idUzytkownika)
    {
        nazwaPlikuZAdresatami = "Adresaci.txt";
    }
    int pobierzZPlikuIdOstatniegoAdresata();
    void dopiszAdresataDoPliku(Adresat adresat);
    int wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
};

#endif
