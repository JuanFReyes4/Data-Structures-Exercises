#pragma once
#include "Nodo.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <string.h>

using namespace std;

class Cola{
	public:
		Cola();
		void *insertar(void *,int);
        void *extraer(void *);
        void imprimir(void *);
        bool vacia();
        double porcentaje(void *);
    private:
        Nodo *raiz;
        Nodo *fondo;
};
