#ifndef POWTORKA_KLASY_KULA_H
#define POWTORKA_KLASY_KULA_H
#include "kolo.h"
#include <iostream>

class kula : public kolo
{
    std::string nazwa;
public:
    void wyswietl();
    kula(std::string nk = "Kolko", std::string np = "s", float a = 0, float b = 0, float pr = 1);
};


#endif //POWTORKA_KLASY_KULA_H
