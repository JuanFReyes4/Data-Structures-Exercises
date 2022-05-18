/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:        #Grupo 12
				Luca Manuel de Veintemilla - lmde2@espe.edu.ec
				Kevin Alexander Vargas - 	 kavargas7@espe.edu.ec
					#Grupo 7
				Brandon Raul Masacela - 	 brmasacela@espe.edu.ec
				Juan Francisco Reyes -       jfreyes4@espe.edu.ec
	FECHA DE CREACION:        16-05-2022 	
	FECHA DE MODIFICACION:    17-05-2022*/
#include <iostream>
#include <iomanip>
#include "Reloj.cpp"

using namespace std;

int main(int argc, char** argv) {
	Reloj R(10,59,56);
    for (int i=0; i<10; i++, ++R)
    cout <<setw(4)<< R.Hora() <<setw(4)<< R.Minuto() 
         <<setw(4)<< R.Segundo() << endl;
	return 0;
}
