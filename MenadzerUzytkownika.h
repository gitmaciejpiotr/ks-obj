#ifndef MENADZERUZYTKOWNIKA_H
#define MENADZERUZYTKOWNIKA_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Uzytkownik.h"
#include "PlikZUzytkownikami.h"
#include "MetodyPomocnicze.h"
#include "MenadzerAdresata.h"

using namespace std;

class MenadzerUzytkownika
{
    int idZalogowanegoUzytkownika;
    PlikZUzytkownikami plikZUzytkownikami;
    MenadzerAdresata menadzerAdresata;
    MetodyPomocnicze metodyPomocnicze;
    vector <Uzytkownik> uzytkownicy;

    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);
    string wczytajLinie();

public:

    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void wczytajUzytkownikowZPliku();
    int logowanieUzytkownika(int idZalogowanegoUzytkownika);
    void zmianaHaslaZalogowanegoUzytkownika();
    void zapiszWszystkichUzytkownikowDoPliku(vector <Uzytkownik> uzytkownicy);
    int dodajAdresata();
    void wyswietlWszystkichAdresatow();
    MenadzerUzytkownika(int idUzytkownika) : idZalogowanegoUzytkownika(idUzytkownika), menadzerAdresata(idUzytkownika){}
};

#endif
