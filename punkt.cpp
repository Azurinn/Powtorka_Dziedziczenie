#include "punkt.h"
#include <iostream>
void punkt::wyswietl() {
    {
        std::cout<<nazwa<<"("<<x<<","<<y<<")"<<std::endl;
    }
}
punkt::punkt(std::string  n, float a , float b) {
    nazwa = n;
    x = a;
    y = b;
}