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
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

class Reloj{
     int hora;
     int minuto;
     int segundo;
   public:
     Reloj(int h=0, int m=0, int s=0);
     void DefineTiempo(int, int, int);
     void DefineHora(int);
     void DefineMinuto(int);
     void DefineSegundo(int);
     int Hora(void);
     int Minuto(void);
     int Segundo(void);
     void operator ++ (void);
};
