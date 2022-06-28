#include <string>
#include <iostream>
#include "Banka.h"
#include <vector>
#include <algorithm>
#include <cctype>


Banka::Banka(string naziv) {
    if (any_of(naziv.begin(), naziv.end(), ::isdigit)) {
        throw "Naziv banke ne smije sadrzavati broj";
    }
    this->naziv=naziv;
    this->brojKlijenata=0;
}

void Banka::dodajKlijenta( Korisnik k, float stanje) {
    for (int i = 0 ; i < brojKlijenata ; i++) {
        if(klijenti[i].getOib()==k.getOib()) {

            throw "Nije dozvoljeno imati 2 klijenta s istim OIB-om";
        }
    }
    k.otvoriRacun(stanje);
    this->klijenti.push_back(k);
    this->brojKlijenata++;
}

void Banka::ispis() {
    cout << "Naziv banke:" << naziv << endl;
    for (int i = 0 ; i < brojKlijenata;i++) {
        klijenti[i].ispis();
    }
}
