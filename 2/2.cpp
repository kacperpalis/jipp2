//
// Created by Kacper on 2021-10-18.
//
#include <string>

class PrzykladowaKlasa
{
public:
    double liczba; //prawo dostępu: publiczne
    char tablica[20]; //prawo dostępu: publiczne

private:
    int abc; //prawo dostępu: prytatne
    char znak; //prawo dostępu: prytatne
    std::string napis; //prawo dostępu: prytatne
};

int main()
{
    PrzykladowaKlasa nazwaZmiennej;
    return(0);
}
