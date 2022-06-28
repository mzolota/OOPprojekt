#include <string>
#include <iostream>
#include  "Korisnik.h"
#include <vector>
using namespace std;

class  Banka {
private:
    string naziv;
    int brojKlijenata;
    vector<Korisnik> klijenti;

public:
    Banka(string naziv);
    void ispis();
    void dodajKlijenta(Korisnik k,float stanje);
};