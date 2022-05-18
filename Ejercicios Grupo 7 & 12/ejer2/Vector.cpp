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

#include "Vector.h"

Vector::Vector(float cx, float cy)
{    x=cx; y=cy;
}

void Vector::DefineX(float cx)
{    x=cx;
}

void Vector::DefineY(float cy)
{    y=cy;
}

float Vector::DameX(void)
{    return x;
}

float Vector::DameY(void)
{    return y;
}

float Vector::operator * (Vector V)
{    return (x*V.DameX() + y*V.DameY());
}
