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
    string tmp_str, renglon;
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
    
    while ( getline(myfile >> ws, renglon) ) {
        tmp_int = stoi(renglon.substr(0,2) );
        tmp_str = renglon.erase(0,2);
        act.set_id(tmp_int);
        act.set_nombre(tmp_str);
        actV.push_back(act);
    }
    myfile.close();
    
    
    for(int k=0; k < actV.size() ; k++)
    {
        cout << actV[k].get_id() << actV[k].get_nombre() << endl;
    }
    
    return 0;
} 
