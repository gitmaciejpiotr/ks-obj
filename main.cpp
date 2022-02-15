#include <iostream>

#include "ks-objectowo.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa;
    int idZalogowanegoUzytkownika;

    ksiazkaAdresowa.rejestracjaUzytkownika();
    idZalogowanegoUzytkownika = ksiazkaAdresowa.logowanieUzytkownika(idZalogowanegoUzytkownika);

    KsiazkaAdresowa ksiazkaAdresowa2(idZalogowanegoUzytkownika);
    ksiazkaAdresowa2.dodajAdresata();
    ksiazkaAdresowa2.wyswietlWszystkichAdresatow();

    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    return 0;
}
