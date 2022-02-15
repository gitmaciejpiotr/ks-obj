#include "MenadzerUzytkownika.h"

void MenadzerUzytkownika::rejestracjaUzytkownika()
{
    Uzytkownik uzytkownik = podajDaneNowegoUzytkownika();

    uzytkownicy.push_back(uzytkownik);

    plikZUzytkownikami.dopiszUzytkownikaDoPliku(uzytkownik);

    cout << endl << "Konto zalozono pomyslnie" << endl << endl;
    system("pause");
}

Uzytkownik MenadzerUzytkownika::podajDaneNowegoUzytkownika()
{
    Uzytkownik uzytkownik;

    uzytkownik.ustawID(pobierzIdNowegoUzytkownika());

    string login;

    do
    {
        cout << "Podaj login: ";
        login = metodyPomocnicze.wczytajLinie();
        uzytkownik.ustawLogin(login);
    }
    while (czyIstniejeLogin(uzytkownik.pobierzLogin()) == true);


    string haslo;
    cout << "Podaj haslo: ";
    haslo = metodyPomocnicze.wczytajLinie();
    uzytkownik.ustawHaslo(haslo);

    return uzytkownik;
}

int MenadzerUzytkownika::pobierzIdNowegoUzytkownika()
{
    if (uzytkownicy.empty() == true)
        return 1;
    else
        return uzytkownicy.back().pobierzID() + 1;
}

bool MenadzerUzytkownika::czyIstniejeLogin(string login)
{
    for (int i = 0; i < uzytkownicy.size(); i++)
    {
        if (uzytkownicy[i].pobierzLogin() == login)
        {
            cout << endl << "Istnieje uzytkownik o takim loginie." << endl;
            return true;
        }
    }
    return false;
}

void MenadzerUzytkownika::wypiszWszystkichUzytkownikow()
{
    for (int i = 0; i < uzytkownicy.size(); i++)
    {
        cout << uzytkownicy[i].pobierzID() << endl;
        cout << uzytkownicy[i].pobierzLogin() << endl;
        cout << uzytkownicy[i].pobierzHaslo() << endl;
    }
}

void MenadzerUzytkownika::wczytajUzytkownikowZPliku()
{
    uzytkownicy = plikZUzytkownikami.wczytajUzytkownikowZPliku();
}

int MenadzerUzytkownika::logowanieUzytkownika(int idZalogowanegoUzytkownika)
{
    Uzytkownik uzytkownik;
    string login = "", haslo = "";

    cout << "Podaj login: ";
    login = metodyPomocnicze.wczytajLinie();

    vector <Uzytkownik>::iterator itr = uzytkownicy.begin();
    while (itr != uzytkownicy.end())
    {
        if (itr -> pobierzLogin() == login)
        {
            for (int iloscProb = 3; iloscProb > 0; iloscProb--)
            {
                cout << "Podaj haslo. Pozostalo prob: " << iloscProb << ": ";
                haslo = metodyPomocnicze.wczytajLinie();

                if (itr -> pobierzHaslo() == haslo)
                {
                    cout << endl << "Zalogowales sie." << endl << endl;
                    return idZalogowanegoUzytkownika = itr -> pobierzID();
                }
            }
            cout << "Wprowadzono 3 razy bledne haslo." << endl;
            system("pause");
            return 0;
        }
        itr++;
    }
    cout << "Nie ma uzytkownika z takim loginem" << endl << endl;
    system("pause");
    return 0;
}

void MenadzerUzytkownika::zmianaHaslaZalogowanegoUzytkownika()
{
    string noweHaslo = "";
    cout << "Podaj nowe haslo: ";
    noweHaslo = metodyPomocnicze.wczytajLinie();

    for (vector <Uzytkownik>::iterator itr = uzytkownicy.begin(); itr != uzytkownicy.end(); itr++)
    {
        if (itr -> pobierzID() == idZalogowanegoUzytkownika)
        {
            itr -> ustawHaslo(noweHaslo);
            cout << "Haslo zostalo zmienione." << endl << endl;
            system("pause");
        }
    }
    zapiszWszystkichUzytkownikowDoPliku(uzytkownicy);
}

void MenadzerUzytkownika::zapiszWszystkichUzytkownikowDoPliku(vector <Uzytkownik> uzytkownicy)
{
    plikZUzytkownikami.zapiszWszystkichUzytkownikowDoPliku(uzytkownicy);
}

int MenadzerUzytkownika::dodajAdresata()
{
    menadzerAdresata.dodajAdresata();
}

void MenadzerUzytkownika::wyswietlWszystkichAdresatow()
{
    menadzerAdresata.wyswietlWszystkichAdresatow();
}
