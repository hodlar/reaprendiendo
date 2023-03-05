#include <iostream>
#include "Pelicula.h"
using namespace std;

/*
 *    int numPelicula;
    int anio;
    int duracion;
    int cantidadActores;
    int *listaActores;
    string titulo;
    string genero;
    */

Pelicula::Pelicula()
{
    numPelicula = 0;
    anio = 0;
    duracion = 0;
    cantidadActores = 0;
    listaActores = 0;
    titulo = "";
    genero = "";
}

Pelicula::Pelicula(int n_num,int n_anio,int n_duracion,int n_cantAct,int *n_listaAct,string n_titulo,string n_genero)
{
    numPelicula = n_num;
    anio = n_anio;
    duracion = n_duracion;
    cantidadActores = n_cantAct;
    listaActores = n_listaAct;
    titulo = n_titulo;
    genero = n_genero;
}

void Pelicula::set_numPelicula(int n_num)
{
    numPelicula = n_num;
}

void Pelicula::set_anio(int n_anio)
{
    anio = n_anio;
}

void Pelicula::set_duracion(int n_dur)
{
    duracion = n_dur;
}

void Pelicula::set_cantidadActores(int n_cant)
{
    cantidadActores = n_cant;
}

void Pelicula::set_listaActores(int* n_list)
{
    listaActores = n_list;
}

void Pelicula::set_titulo(string n_tit)
{
    titulo = n_tit;
}

void Pelicula::set_genero(string n_gen)
{
    genero = n_gen;
}

int Pelicula::get_numPelicula()
{
    return numPelicula;
}

int Pelicula::get_anio()
{
    return anio;
}

int Pelicula::get_duracion()
{
    return duracion;
}

int Pelicula::get_cantidadActores()
{
    return cantidadActores;
}

int* Pelicula::get_listaActores()
{
    return listaActores;
}

int Pelicula::get_actorEspecifico(int index)
{
    if(cantidadActores < 1 || cantidadActores < index)
    { cout << "Ese actor no se encuentra en la lista" << endl; }
    else{
        return *(listaActores+index) ;
    }
}

string Pelicula::get_titulo()
{
    return titulo;
}

string Pelicula::get_genero()
{
    return genero;
}

bool Pelicula::add_Actor(int id)
{
    *(listaActores + cantidadActores) = id;
    cantidadActores++;
    return true;
}
