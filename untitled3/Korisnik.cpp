#include <string>
#include <iostream>
#include "Korisnik.h"
#include <vector>

using namespace std;

Korisnik::Korisnik(string ime, string prezime, string oib)  {
    this->ime=ime;
    this->prezime=prezime;
    this->oib=oib;
    this->brojRacuna=0;

}

void Korisnik::otvoriRacun(float stanje) {
    Racun racun(stanje);
    racuni.push_back(racun);
    this->brojRacuna++;

}

void Korisnik::ispis() {
    cout << "Korisnik: " << ime  <<" " << prezime << endl;
    float suma=0;
    for (int i =0;i<brojRacuna;i++) {
        suma=suma+racuni[i].getStanje();
    }
    cout << "Ukupno stanje:" << suma << endl;
}


string Korisnik::getOib() {
    return oib;
}


void Korisnik::otvoriDevizniRacun(float stanje,string valuta) {
    DevizniRacun racun(stanje,valuta);
    devizniRacuni.push_back(racun);
    this->brojRacuna++;

}

