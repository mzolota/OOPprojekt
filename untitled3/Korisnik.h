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
    int brojRacuna;




public:
    Korisnik(string ime , string prezime , string oib);
    void otvoriRacun(float stanje);
    void ispis();
    string getOib();

    vector<Racun> racuni;
    vector<DevizniRacun> devizniRacuni;
    void otvoriDevizniRacun(float stanje,string valuta);



};
