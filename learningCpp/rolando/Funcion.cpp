#include <iostream>
#include "Funcion.h"
#include "Hora.h"
using namespace std;

Funcion::Funcion()
{
    Hora hora_tmp;
    cveFuncion = "";
    numPeli = 0;
    hora = hora_tmp;
    sala = 0;
}

Funcion::Funcion(string new_cve,int nPeli,int new_sala,Hora new_hora)
{
    cveFuncion = new_cve;
    numPeli = nPeli;
    hora = new_hora;
    sala = new_sala;
}

void Funcion::set_cveFuncion(string new_cve)
{
    cveFuncion = new_cve;
}

void Funcion::set_numPeli(int new_num)
{
    numPeli = new_num;
}

void Funcion::set_sala(int new_sala)
{
    sala = new_sala;
}

void Funcion::set_hora(Hora new_hora)
{
    hora = new_hora;
}

string Funcion::get_cveFuncion()
{
    return cveFuncion;
}

int Funcion::get_numPeli()
{
    return numPeli;
}

int Funcion::get_sala()
{
    return sala;
}

Hora Funcion::get_hora()
{
    return hora;
}

/*
Funcion
cveFuncion:String
numPeli:integer
hora:Hora
sala:int
*/
