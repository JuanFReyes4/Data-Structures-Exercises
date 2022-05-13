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

    do {
        system("cls");
        
        cout << "----------- GRUPO 7 -----------" << endl;
        cout << " Brandon Masacela --- Juan Reyes" << endl;
        cout << "\n";
        cout << "1 -> Convertir de String a Enetro" << endl;
        cout << "2 -> Convertir de String a Char" << endl;
        cout << "3 -> Convertir de Float a String" << endl;
        cout << "4 -> Salir" << endl;
        cout << "\n";
        do{
        	cout << "**Seleccione opcion (1 - 3) para usar el programa";
			cout << "\n**PRESIONE EL NUMERO CUATRO PARA SALIR" << endl;
			cout << "\nEscoger opcion: "; cin >> op;	
		}while (op<1 || op>4);
        switch (op) {
            case 1:
                dato.convertirEntero();
                fflush(stdin);
                system("pause > nul"); // Pausa
                break;
            case 2:
                dato.convertirString();
                fflush(stdin);
                system("pause > nul"); // Pausa
                break;
            case 3:
                dato.convertirFloat();
                fflush(stdin);
                system("pause > nul"); // Pausa
                break;             
            case 4:
            	cout << "Muchas gracias por usar nuestro programa!" << endl;
            	break;
        }
    } while (op!=4);
    return 0;
}
