#include "Adresat.h"

void Adresat::ustawID(int noweID)
{
    if (noweID >= 0)
        id = noweID;
}
void Adresat::ustawIDUzytkownika(int noweIDUzytkownika)
{
    idUzytkownika = noweIDUzytkownika;
}
void Adresat::ustawImie(string noweImie)
{
    imie = noweImie;
}
void Adresat::ustawNazwisko(string noweNazwisko)
{
    nazwisko = noweNazwisko;
}
void Adresat::ustawNrTelefonu(string nowyNrTelefonu)
{
    numerTelefonu = nowyNrTelefonu;
}
void Adresat::ustawEmail(string nowyEmail)
{
    email = nowyEmail;
}
void Adresat::ustawAdres(string nowyAdres)
{
    adres = nowyAdres;
}
int Adresat::pobierzID()
{
    return id;
}
int Adresat::pobierzIDUzytkownika()
{
    return idUzytkownika;
}
string Adresat::pobierzImie()
{
    return imie;
}
string Adresat::pobierzNazwisko()
{
    return nazwisko;
}
string Adresat::pobierzNrTelefonu()
{
    return numerTelefonu;
}
string Adresat::pobierzEmail()
{
    return email;
}
string Adresat::pobierzAdres()
{
    return adres;
}
