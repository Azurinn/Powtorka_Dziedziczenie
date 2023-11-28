#include "kolo.h"

void kolo::wyswietl()
{
        std::cout << "Kolo o nazwie nazwa: " << nazwa << std::endl;
        std::cout << "Srodek kola: " << std::endl;
        punkt::wyswietl();
        std::cout << "Promien: " << r << std::endl;
        std::cout << "Pole kola :" << M_PI*r*r << std::endl;

}
kolo::kolo(std::string nk, std::string np, float a, float b, float pr)
    : punkt(np,a,b)
{
    nazwa = nk;
    r = pr;

}