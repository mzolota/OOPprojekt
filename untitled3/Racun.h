#include <vector>
#include <string>
#include "Transakcija.h"

using namespace std;


class Racun {
protected:
    float stanje;
    int brojUplata;
    int brojIsplata;
    string datumZadnjeIsplate;
    string datumZadnjeUplate;


public:
    Transakcije <float> transakcije;
    void uplata(float  iznos);
    void isplata(float iznos);
    void ispis();
    Racun(float stanje) ;
    Racun();
    float getStanje();
    int getBrojUplata();
    int getBrojIsplata();
    string getDatumIsplate();
    string getDatumUplate();



};


class DevizniRacun:public Racun{
private:
    string valuta;
public:
    DevizniRacun(float stanje , string valuta);
    DevizniRacun(float stanje );
    void ispis();




};
