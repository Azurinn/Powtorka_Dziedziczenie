#ifndef POWTORKA_KLASY_KOLO_H
#define POWTORKA_KLASY_KOLO_H
#include <iostream>
#include <math.h>
#include "punkt.h"

class kolo : public punkt
{
protected:
    float r;
    std::string nazwa;
public:
    void wyswietl();
    kolo(std::string nk = "Kolko", std::string np = "s", float a = 0, float b = 0, float pr = 1);
};


#endif //POWTORKA_KLASY_KOLO_H
