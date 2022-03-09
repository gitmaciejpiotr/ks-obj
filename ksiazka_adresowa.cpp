#include "ksiazka_adresowa.h"

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

void KsiazkaAdresowa::wyszukajAdresatowPoImieniu()
{
    menadzerAdresata->wyszukajAdresatowPoImieniu();
}

void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku()
{
    menadzerAdresata->wyszukajAdresatowPoNazwisku();
}

int KsiazkaAdresowa::usunAdresata()
{
    menadzerAdresata->usunAdresata();
}

void KsiazkaAdresowa::edytujAdresata()
{
    menadzerAdresata->edytujAdresata();
}

bool KsiazkaAdresowa::czyUzytkownikJestZalogowany()
{
    menadzerUzytkownika.czyUzytkownikJestZalogowany();
}

char KsiazkaAdresowa::wybierzOpcjeZMenuGlownego()
{
    MetodyPomocnicze metodyPomocnicze;
    char wybor;

    system("cls");
    cout << "    >>> MENU  GLOWNE <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "9. Koniec programu" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = metodyPomocnicze.wczytajZnak();

    return wybor;
}

char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika()
{
    menadzerUzytkownika.wybierzOpcjeZMenuUzytkownika();
}

