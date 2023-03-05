/*
hora
hh:int
mm:int
*/

#include <iostream>
using namespace std;
#pragma once

class Hora
{
public:
    Hora();
    Hora(int,int);
    int get_hh();
    int get_mm();
    void set_hh(int);
    void set_mm(int);
private:
    int hh;
    int mm;
};
