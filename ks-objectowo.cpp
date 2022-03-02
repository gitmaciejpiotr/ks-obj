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
    idZalogowanegoUzytkownika = menadzerUzytkownika.logowanieUzytkownika();
    if (menadzerUzytkownika.czyUzytkownikJestZalogowany())
    {
        menadzerAdresata = new MenadzerAdresata(menadzerUzytkownika.pobierzIdZalogowanegoUzytkownika());
    }
    return idZalogowanegoUzytkownika;
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    menadzerUzytkownika.zmianaHaslaZalogowanegoUzytkownika();
}
void KsiazkaAdresowa::wylogowanieUzytkownika()
{
    menadzerUzytkownika.wylogowanieUzytkownika();
    delete menadzerAdresata;
    menadzerAdresata = NULL;
}

int KsiazkaAdresowa::dodajAdresata()
{
    if (menadzerUzytkownika.czyUzytkownikJestZalogowany())
    {
        menadzerAdresata->dodajAdresata();
    }
    else
    {
        cout << "Aby dodac adresata musisz sie zalogowac" << endl;
        system("pause");
    }
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    menadzerAdresata->wyswietlWszystkichAdresatow();
}

bool KsiazkaAdresowa::czyUzytkownikJestZalogowany()
{
    menadzerUzytkownika.czyUzytkownikJestZalogowany();
}
