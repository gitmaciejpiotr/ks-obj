#include "MenadzerAdresata.h"


void MenadzerAdresata::wyswietlDaneAdresata()
{
    cout << endl << "Id:                 " << adresat.pobierzID() << endl;
    cout << "Imie:               " << adresat.pobierzImie() << endl;
    cout << "Nazwisko:           " << adresat.pobierzNazwisko() << endl;
    cout << "Numer telefonu:     " << adresat.pobierzNrTelefonu() << endl;
    cout << "Email:              " << adresat.pobierzEmail() << endl;
    cout << "Adres:              " << adresat.pobierzAdres() << endl;
}

Adresat MenadzerAdresata::podajDaneNowegoAdresata(int idZalogowanegoUzytkownika)
{
    Adresat nowyAdresat;

    nowyAdresat.ustawID(++idOstatniegoAdresata);
    nowyAdresat.ustawIDUzytkownika(idZalogowanegoUzytkownika);

    cout << "Podaj imie: ";
    nowyAdresat.ustawImie(metodyPomocnicze.wczytajLinie());
    nowyAdresat.ustawImie(metodyPomocnicze.zamienPierwszaLitereNaDuzaAPozostaleNaMale(nowyAdresat.pobierzImie()));

    cout << "Podaj nazwisko: ";
    nowyAdresat.ustawNazwisko(metodyPomocnicze.wczytajLinie());
    nowyAdresat.ustawNazwisko(metodyPomocnicze.zamienPierwszaLitereNaDuzaAPozostaleNaMale(nowyAdresat.pobierzNazwisko()));

    cout << "Podaj numer telefonu: ";
    nowyAdresat.ustawNrTelefonu(metodyPomocnicze.wczytajLinie());

    cout << "Podaj email: ";
    nowyAdresat.ustawEmail(metodyPomocnicze.wczytajLinie());

    cout << "Podaj adres: ";
    nowyAdresat.ustawAdres(metodyPomocnicze.wczytajLinie());

    return nowyAdresat;
}

string MenadzerAdresata::wczytajLinie()
{
    metodyPomocnicze.wczytajLinie();
}

string MenadzerAdresata::zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst)
{
    metodyPomocnicze.zamienPierwszaLitereNaDuzaAPozostaleNaMale(tekst);
}

int MenadzerAdresata::wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika, vector <Adresat> adresaci)
{
    plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika, adresaci);
}

int MenadzerAdresata::dodajAdresata(int idZalogowanegoUzytkownika)
{
    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata(idZalogowanegoUzytkownika);

    adresaci.push_back(adresat);
    plikZAdresatami.dopiszAdresataDoPliku(adresat);

    return ++idOstatniegoAdresata;
}


void MenadzerAdresata::wyswietlWszystkichAdresatow()
{
    system("cls");
    if (!adresaci.empty())
    {
        cout << "             >>> ADRESACI <<<" << endl;
        cout << "-----------------------------------------------" << endl;
        for (vector <Adresat> :: iterator itr = adresaci.begin(); itr != adresaci.end(); itr++)
        {
            wyswietlDaneAdresata();
        }
        cout << endl;
    }
    else
    {
        cout << endl << "Ksiazka adresowa jest pusta." << endl << endl;
    }
    system("pause");
}
