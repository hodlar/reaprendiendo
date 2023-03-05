#include <fstream>
#include <iostream>
#include <vector>
#include "Hora.h"
#include "Funcion.h"
#include "Pelicula.h"
#include "Actor.h"

using namespace std;

int main()
{
    ifstream myfile;
    Hora unaH;
    int tmp_int;
    string tmp_str;
    vector<Funcion> funV;
    vector<Pelicula> peliV;
    vector<Actor> actV;
    Funcion func;
    Pelicula peli;
    Actor act;

    myfile.open("Actores.txt");
    if (!myfile) {
    cerr << "Error in opening the file" << endl;
    }
    
    while (myfile >> tmp_int >> tmp_str) {
        act.set_id(tmp_int);
        act.set_nombre(tmp_str);
        actV.push_back(act);
    }
    myfile.close();
    
    myfile.open("Peliculas.txt");

    
    
    return 0;
} 
