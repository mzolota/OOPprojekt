#include "Transakcija.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

template < typename T >
Transakcije<T>::Transakcije(vector<T> uplate , vector<T> isplate) {
    this->uplate=uplate;
    this->isplate=isplate;
}
template < typename T >
vector<T> Transakcije<T>::getIsplata() {
    return this->isplate;
}



template < typename T >
vector<T> Transakcije<T>::getUplata () {
    return this->uplate;
}

template < typename T >
void Transakcije<T>::setIsplata(T isplata) {
    this->isplate.push_back(isplata);
}

template < typename T >
void Transakcije<T>::setUplata(T uplata)  {
    this->uplate.push_back(uplata);
}

template < typename T >
Transakcije<T>::Transakcije() {

}