#include <iostream>
using namespace std;
#pragma once

class Actor 
{
public:
    Actor();
    Actor(int,string);
    void set_id(int);
    void set_nombre(string);
    int get_id();
    string get_nombre();
private:
    int id;
    string nombre;
};
