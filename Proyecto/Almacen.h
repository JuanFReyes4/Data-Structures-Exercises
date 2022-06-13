#pragma once
#include "Persona.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <string.h>

using namespace std;

class Almacen{
	private:
        Persona* primero;
        Persona* actual;
	public:
		Almacen();
		void comprarCelular(string, string, string, double, int);
		void buscarStock(string);
		double venderCelular(string, string, string, double, int, int);
		void mostrar();
		bool vacio();
		char *ingresoDouble(const char*);
        double convertirDouble();
		int validacionCelular(string);
};
