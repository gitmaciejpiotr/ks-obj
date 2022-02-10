#include <iostream>

#include "ks-objectowo.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa;
    int idZalogowanegoUzytkownika;

    ksiazkaAdresowa.rejestracjaUzytkownika();
    ksiazkaAdresowa.logowanieUzytkownika();
    //ksiazkaAdresowa.dodajAdresata(idZalogowanegoUzytkownika);
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    return 0;
}
