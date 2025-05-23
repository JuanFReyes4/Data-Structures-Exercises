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

using namespace std;

class Complejo
{    float real;
     float imag;
   public:
     Complejo(float r=0, float i=0);
     void DefineR(float);
     void DefineI(float);
     float DameR(void);
     float DameI(void);
     Complejo operator + (Complejo);
     Complejo operator - (Complejo);
};
