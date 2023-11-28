#ifndef POWTORKA_KLASY_PUNKT_H
#define POWTORKA_KLASY_PUNKT_H
#include <iostream>


class punkt {
    float x,y;
    std::string nazwa;
public:
    void wyswietl();
    punkt(std::string s = "x", float a = 0, float = 0);
};


#endif //POWTORKA_KLASY_PUNKT_H
