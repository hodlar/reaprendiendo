#include <iostream>
#include "Hora.h"
#include "Funcion.h"
#include "Pelicula.h"
#include "Actor.h"

using namespace std;

int main()
{
    int *tmp;
    Hora unaH;
    Funcion unaF;
    Pelicula unaP;
    Actor unA;
    
    cout << unaP.get_cantidadActores() << endl;
    unaP.add_Actor(222);
    unaP.add_Actor(333);
    unaP.add_Actor(444);
    cout << unaP.get_cantidadActores() << endl;
    tmp = unaP.get_listaActores();
    cout << unaP.get_actorEspecifico(1) << endl;
    
    return 0;
} 
