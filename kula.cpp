#include "kula.h"
#include <iostream>
kula::kula(std::string nk, std::string np, float a, float b, float pr)
    : kolo(nk,np,a,b,pr)
{

}

void kula::wyswietl()
{
    kolo::wyswietl();
    std::cout << "Obietosc kuli to: " << (4/3) * M_PI * (r* r* r);
//    v = 4/3 pr^3
}