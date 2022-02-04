#ifndef KS-OBJECTOWO_H
#define KS-OBJECTOWO_H

#include <iostream>

#include "MenadzerUzytkownika.h"

using namespace std;

class KsiazkaAdresowa
{
    MenadzerUzytkownika menadzerUzytkownika;

public:
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami) : menadzerUzytkownika(nazwaPlikuZUzytkownikami){
    menadzerUzytkownika.wczytajUzytkownikowZPliku();
    };
};

#endif
