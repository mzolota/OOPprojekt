#include <iostream>
using namespace std;
#include <string>
#include <unordered_map>
#include <array>
#include <vector>
#include "Banka.h"




int main() {

/*
    try {
Banka primjer ("1wmrkva");
        Korisnik korisnik ("Marin" , "zolota" , "245335")  ;
        Korisnik korisnik2 ("Mario" , "Dudjak" , "245332");
        try {
            primjer.dodajKlijenta(korisnik,100);
        }
        catch (char const* e ) {
            cout<< e;
        }

        try {
            primjer.dodajKlijenta(korisnik2);
        }
        catch (char const* e ) {
            cout<< e;
        }
    }
    catch (char const* e) {
        cout << e << endl;
    }

 */

Banka b ("zagrebacka") ;
Korisnik k ("Marko","Marulic","0313323");
Korisnik c ("Ivana","Brlic","3345");
Korisnik d ("Pale","sam","031122");
k.otvoriRacun(3000);
b.dodajKlijenta(k);
b.dodajKlijenta(c);
b.dodajKlijenta(d,200);
b.ispis();

    return 0;
}
