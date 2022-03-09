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

using namespace std;

class MenadzerUzytkownika
{
    int idZalogowanegoUzytkownika;
    PlikZUzytkownikami plikZUzytkownikami;
    MetodyPomocnicze metodyPomocnicze;
    vector <Uzytkownik> uzytkownicy;

    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);
    string wczytajLinie();

public:

    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    int logowanieUzytkownika();
    void wylogowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wyswietlWszystkichAdresatow();
    char wybierzOpcjeZMenuUzytkownika();
    MenadzerUzytkownika(int idUzytkownika) : idZalogowanegoUzytkownika(idUzytkownika)
    {
        uzytkownicy = plikZUzytkownikami.wczytajUzytkownikowZPliku();
    };
    bool czyUzytkownikJestZalogowany();
    int pobierzIdZalogowanegoUzytkownika();
};

#endif
