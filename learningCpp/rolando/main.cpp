#include <iostream>
#include "Hora.h"

using namespace std;

int main()
{
    Hora unahora;
    unahora.set_hh(5);
    cout << unahora.get_hh() << unahora.get_mm() << endl;
    return 0;
} 
