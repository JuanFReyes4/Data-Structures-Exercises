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

using namespace std; 

class A
 {   int a;
   public:
     A(int = 0);
     void DefineA(int);
     int DameA(void);
 };

class B 
 {    int b;
      int cant;
      A m[20];
   public:
      B(void);
      void DefineB(int);
      int DameB(void);
      int DameCant(void);
      void Ingresa(int);
      int operator[](int);
 };
