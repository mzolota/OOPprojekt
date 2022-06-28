#include <string>
#include <iostream>
#include  "Racun.h"
#include <vector>
using namespace std;

class Korisnik {
private:
    string ime;
    string prezime;
    string oib; // za svaki slucaj ako pocne nulom
    vector<Racun> racuni;
    int brojRacuna;


public:
    Korisnik(string ime , string prezime , string oib);
    void otvoriRacun(float stanje);
    void ispis();
    string getOib();



};
