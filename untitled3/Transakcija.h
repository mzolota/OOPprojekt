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
    Transakcije(){};
    Transakcije(vector <T> uplata ,vector <T>  isplata) {
        this->uplate=uplate;
        this->isplate=isplate;
    }
    vector<T> getUplata() {
        return this->uplate;
    }
    vector <T>getIsplata() {

            return this->isplate;

    }
    void setIsplata (T isplata) {
        this->isplate.push_back(isplata);
    }
    void setUplata(T uplata)  {
        this->uplate.push_back(uplata);
    }
    void ispisUplata() {
        cout << "Uplate: " << endl;
        for (int i =0;i<uplate.size();i++) {
            cout << uplate[i] << endl;
        }
    }
    void ispisIsplata() {
        cout << "Uplate: " << endl;
        for (int i =0;i<isplate.size();i++) {
            cout << isplate[i] << endl;
        }
    }



};