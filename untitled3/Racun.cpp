#include <string>
#include <iostream>
#include "Racun.h"
#include <ctime>
#include <chrono>


using namespace std;
Racun::Racun(){
    this->stanje=0;
    this->brojIsplata=0;
    this->brojUplata=0;

} ;
Racun::Racun(float stanje) {
    this->stanje=stanje;
    this->brojIsplata=0;
    this->brojUplata=0;
}

float Racun::getStanje() {
    return stanje;
}

int Racun::getBrojUplata() {
    return brojUplata;
}

int Racun::getBrojIsplata() {
    return brojIsplata;
}

string Racun::getDatumIsplate() {
    return datumZadnjeIsplate;
}

string Racun::getDatumUplate() {
    return datumZadnjeUplate;
}


void Racun::uplata(float iznos) {
    this->stanje+=iznos;
    this->brojUplata++;
    auto end = std::chrono::system_clock::now();
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    // uzeo sa stack overflova za mjerenje vremena
    this->datumZadnjeUplate=ctime(&end_time);


}

void Racun::isplata(float iznos) {
    this->stanje-=iznos;
    this->brojIsplata++;
    auto end = std::chrono::system_clock::now();
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    // uzeo sa stack overflova za mjerenje vremena
    this->datumZadnjeIsplate=ctime(&end_time);


}

void Racun::ispis() {
    cout << "Stanje na računu: " << stanje << endl;
    cout << "Datum zadnje uplate: " << datumZadnjeUplate << endl;
    cout << "Datum zadnje isplate: " << datumZadnjeIsplate << endl;
}
DevizniRacun::DevizniRacun(float stanje){
    this->valuta="kn";
    this->stanje=stanje;
};


DevizniRacun::DevizniRacun(float stanje, string valuta){
    this->valuta=valuta;
    this->stanje=stanje;
};

void DevizniRacun::ispis() {
    Racun::ispis(); //primjer overridinga
}




