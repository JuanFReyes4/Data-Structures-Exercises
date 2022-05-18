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

#include "Complejo.h"

Complejo::Complejo(float r, float i)
{    real=r; imag=i; 
}

void Complejo::DefineR(float r)
{    real=r; 
}

void Complejo::DefineI(float i)
{    imag=i; 
}

float Complejo::DameR(void)
{    return real; 
}

float Complejo::DameI(void)
{    return imag; 
}

Complejo Complejo::operator + (Complejo C)
{    return Complejo(real+C.DameR() , imag+C.DameI());
}

Complejo Complejo::operator - (Complejo C)
{    return Complejo(real-C.DameR() , imag-C.DameI());
}
