/*
Funcion
cveFuncion:String
numPeli:integer
hora:Hora
sala:int
*/

#include <iostream>
#include "Hora.h"
using namespace std;
#pragma once

class Funcion 
{
public:
    Funcion();
    Funcion(string,int,int,Hora);
    void set_cveFuncion(string);
    void set_numPeli(int);
    void set_sala(int);
    void set_hora(Hora);
    string get_cveFuncion();
    int get_numPeli();
    int get_sala();
    Hora get_hora();
private:
    int numPeli;
    int sala;
    string cveFuncion;
    Hora hora;
};
