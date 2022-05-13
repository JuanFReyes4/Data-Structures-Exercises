/*
* UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
* ENUNCIADO: Crear un porgrama en c++ que
* tome unacadena de datos string y la
* transforme a entero, char y flotante.
* AUTORES: Brandon Masacela y Juan Reyes
* FECHA DE CREACION: 12/05/2022
* FECHA DE MODIFICACION: 12/05/2022
* GRUPO: 7
* GITHUB: jfreyes4@espe.edu.ec
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <cstring>
#include "Funciones.cpp"


using namespace std;


int main (int argc, char** argv){

	Funciones dato;
    int op;
    bool bucleMenu = true;

    do {

        system("cls");

        cout << "----------- GRUPO 7 -----------" << endl;
        cout << " Brandon Masacela --- Juan Reyes" << endl;
        cout << "\n";
        cout << "1 -> Convertir de String a Entero" << endl;
        cout << "2 -> Convertir de String a Char" << endl;
        cout << "3 -> Convertir de Float a String" << endl;
        cout << "4 -> Salir" << endl;
        cout << "\n";
        cout << "Seleccione opcion (1 - 4): ";  cin >> op;


        switch (op) {

            case 1:
                dato.convertirEntero();
                fflush(stdin);
                system("pause > nul");
                break;

            case 2:
                dato.convertirString();
                fflush(stdin);
                system("pause > nul");
                break;

            case 3:
                dato.convertirFloat();
                fflush(stdin);
                system("pause > nul");
                break;

            case 4:
            	bucleMenu = false;
            	cout << "\nMuchas gracias por usar nuestro programa!" << endl;
            	break;
        }
    } while (bucleMenu);

    return 0;
}
