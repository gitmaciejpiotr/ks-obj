#ifndef ADRESAT_H
#define ADRESAT_H

#include <iostream>

using namespace std;

class Adresat
{
    int id;
    int idUzytkownika;
    string imie;
    string nazwisko;
    string numerTelefonu;
    string email;
    string adres;

public:
    void ustawID(int noweID);
    void ustawIDUzytkownika(int noweIDUzytkownika);
    void ustawImie(string noweImie);
    void ustawNazwisko(string noweNazwisko);
    void ustawNrTelefonu(string nowyNrTelefonu);
    void ustawEmail(string nowyEmail);
    void ustawAdres(string nowyAdres);
    Adresat(int id = 0, int idUzytkownika = 0, string imie = "Ambrozy", string nazwisko = "Kleks", string numerTelefonu = "*** *** ***", string email = "ambrozy@kleks.ak", string adres = "Radom")
    {
        this->id = id;
        this->idUzytkownika = idUzytkownika;
        this->imie = imie;
        this->nazwisko = nazwisko;
        this->numerTelefonu = numerTelefonu;
        this->email = email;
        this->adres = adres;
    };

    int pobierzID();
    int pobierzIDUzytkownika();
    string pobierzImie();
    string pobierzNazwisko();
    string pobierzNrTelefonu();
    string pobierzEmail();
    string pobierzAdres();
};

#endif
