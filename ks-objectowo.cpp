#include "ks-objectowo.h"

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    menadzerUzytkownika.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    menadzerUzytkownika.wypiszWszystkichUzytkownikow();
}

int KsiazkaAdresowa::logowanieUzytkownika()
{
    menadzerUzytkownika.logowanieUzytkownika();
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    menadzerUzytkownika.zmianaHaslaZalogowanegoUzytkownika();
}

KsiazkaAdresowa::KsiazkaAdresowa()
{
    menadzerUzytkownika.wczytajUzytkownikowZPliku();
};
