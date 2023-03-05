#include <iostream>
#include "Hora.h"
using namespace std;

Hora::Hora()
{
    mm = 0;
    hh = 0;
}

Hora::Hora(int horas,int minutos)
{
    hh = horas;
    mm = minutos;
}

int Hora::get_hh()
{
    return hh;
}

int Hora::get_mm()
{
    return mm;
}

void Hora::set_hh(int horas)
{
    hh = horas;
}

void Hora::set_mm(int minutos)
{
    mm = minutos;
}
