#ifndef PLIKZUZYTKOWNIKAMI_H
#define PLIKZUZYTKOWNIKAMI_H

#include <vector>
#include <windows.h>
#include <fstream>
#include <cstdlib>

#include "Uzytkownik.h"
#include "MetodyPomocnicze.h"
#include "PlikZDanymi.h"


using namespace std;

class PlikZUzytkownikami : public PlikZDanymi
{
    const string NAZWA_PLIKU_Z_UZYTKOWNIKAMI;
    fstream plikTekstowy;

    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);

public:
    PlikZUzytkownikami(string nazwaPlikuZUzytkownikami = "Uzytkownicy.txt") : NAZWA_PLIKU_Z_UZYTKOWNIKAMI(nazwaPlikuZUzytkownikami), PlikZDanymi(nazwaPlikuZUzytkownikami) {};
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    vector <Uzytkownik> wczytajUzytkownikowZPliku();
    void zapiszWszystkichUzytkownikowDoPliku(vector <Uzytkownik> uzytkownicy);

};

#endif
