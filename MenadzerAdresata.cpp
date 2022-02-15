#include "MenadzerAdresata.h"


void MenadzerAdresata::wyswietlDaneAdresata(int i)
{
    cout << endl << "Id:                 " << adresaci[i].pobierzID() << endl;
    cout << "Imie:               " << adresaci[i].pobierzImie() << endl;
    cout << "Nazwisko:           " << adresaci[i].pobierzNazwisko() << endl;
    cout << "Numer telefonu:     " << adresaci[i].pobierzNrTelefonu() << endl;
    cout << "Email:              " << adresaci[i].pobierzEmail() << endl;
    cout << "Adres:              " << adresaci[i].pobierzAdres() << endl;
}

Adresat MenadzerAdresata::podajDaneNowegoAdresata()
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

int MenadzerAdresata::wczytajAdresatowZalogowanegoUzytkownikaZPliku()
{
    plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku();
}

int MenadzerAdresata::dodajAdresata()
{
    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata();

    adresaci.push_back(adresat);
    plikZAdresatami.dopiszAdresataDoPliku(adresat);

    return ++idOstatniegoAdresata;
}


void MenadzerAdresata::wyswietlWszystkichAdresatow()
{
    wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    adresaci = plikZAdresatami.adresaci;

    system("cls");
    if (!adresaci.empty())
    {
        cout << "             >>> ADRESACI <<<" << endl;
        cout << "-----------------------------------------------" << endl;
        for (int i = 0; i < adresaci.size(); i ++)
        {
            wyswietlDaneAdresata(i);
        }
        cout << endl;
    }
    else
    {
        cout << endl << "Ksiazka adresowa jest pusta." << endl << endl;
    }
    system("pause");
}
