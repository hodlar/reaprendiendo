#include <iostream>
#include "Actor.h"
using namespace std;

Actor::Actor()
{
    id = 0;
    nombre = "";
}

Actor::Actor(int new_id,string new_name)
{
    id = new_id;
    nombre = new_name;
}

void Actor::set_id(int new_id)
{
    id = new_id;
}

void Actor::set_nombre(string new_name)
{
    nombre = new_name;
}

int Actor::get_id()
{
    return id;
}

string Actor::get_nombre()
{
    return nombre;
}
