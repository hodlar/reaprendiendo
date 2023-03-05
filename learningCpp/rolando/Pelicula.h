/*
Pelicula
numPeli:integer
titulo:string
anio:int
duracion:int
genero:string
cantidadActores:int
listaActores:*int
*/

#include <iostream>
#include "Hora.h"
using namespace std;
#pragma once

class Pelicula 
{
public:
    Pelicula();
    Pelicula(int,int,int,int,int*,string,string);
    void set_numPelicula(int);
    void set_anio(int);
    void set_duracion(int);
    void set_cantidadActores(int);
    void set_listaActores(int*);
    void set_titulo(string);
    void set_genero(string);
    int get_numPelicula();
    int get_anio();
    int get_duracion();
    int get_cantidadActores();
    int* get_listaActores();
    string get_titulo();
    string get_genero();
    int get_actorEspecifico(int);
    bool add_Actor(int);
private:
    int numPelicula;
    int anio;
    int duracion;
    int cantidadActores;
    int *listaActores;
    string titulo;
    string genero;
};
