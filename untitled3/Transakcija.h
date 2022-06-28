#include <string>
#include <iostream>
#include <vector>
using namespace std;

template < typename T >
class Transakcije {
private:
    vector<T > uplate ;
    vector <T>isplate;
public:
    Transakcije(vector <T> uplata ,vector <T>  isplata);
    vector<T> getUplata();
    vector <T>getIsplata();
    void setIsplata(T isplata);
    void setUplata(T uplata);



};