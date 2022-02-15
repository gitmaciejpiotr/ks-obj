#include "ks-objectowo.h"

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    menadzerUzytkownika.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    menadzerUzytkownika.wypiszWszystkichUzytkownikow();
}

int KsiazkaAdresowa::logowanieUzytkownika(int idZalogowanegoUzytkownika)
{
    menadzerUzytkownika.logowanieUzytkownika(idZalogowanegoUzytkownika);
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    menadzerUzytkownika.zmianaHaslaZalogowanegoUzytkownika();
}

int KsiazkaAdresowa::dodajAdresata()
{
    menadzerUzytkownika.dodajAdresata();
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    menadzerUzytkownika.wyswietlWszystkichAdresatow();
}
