#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <string.h>

using namespace std;

class Funciones{
    public:
        Funciones();
        virtual char *ingresoDato(const char*);
        int convertirEntero();
        int convertirFloat();
        int convertirString();
};



