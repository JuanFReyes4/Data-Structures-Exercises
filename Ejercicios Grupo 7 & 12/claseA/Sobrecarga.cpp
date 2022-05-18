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

#include "Sobrecarga.h"

 A::A(int x)
  { a = x; }

 void A::DefineA(int x)
  { a = x; }

 int A::DameA(void)
  { return a; }
 
 B::B(void)
  { cant = 0;
  }

 void B::DefineB(int x)
  { b = x; }

 int B::DameB(void)
  { return b; }

 int B::DameCant(void)
  { return cant; }

 void B::Ingresa(int x)
  { m[cant++].DefineA(x); }

 int B::operator[](int i)
  { return m[i].DameA(); }
