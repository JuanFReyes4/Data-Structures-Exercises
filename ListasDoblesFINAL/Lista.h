/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    #Grupo 7
				Brandon Raul Masacela - 	 brmasacela@espe.edu.ec
				Juan Francisco Reyes -       jfreyes4@espe.edu.ec
	FECHA DE CREACION:        02-06-2022 	
	FECHA DE MODIFICACION:    02-06-2022
*/
#pragma once
#include "Nodo.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <string.h>

using namespace std;

class Lista{
	private:
        Nodo* primero;
        Nodo* actual;
	public:
		Lista();
		void insertarCabeza(int);
		void insertarCola(int);
		void insertarPosicion(int, int);
		char *ingresoEntero(const char*);
        int convertirEntero();
		char *ingresoEnteroMenu(const char*);
        int convertirEnteroMenu();
		void buscar(int);
		void mostar();
		void eliminarCola();
		void eliminarCabeza();
		void eliminarNodo(int);
};