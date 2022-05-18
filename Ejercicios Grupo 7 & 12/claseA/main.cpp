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
#include "Sobrecarga.cpp"

int main(int argc, char **argv)
{
	B Ob;

   cout << "Ingrese datos :" << endl;
   while (1)
    { int p;
      cin >> p;
      if (p<=0) break;
      Ob.Ingresa(p);
    }

    cout << "Datos le¡dos :" << endl;

   for (int i=0; i<Ob.DameCant(); i++)
     cout << Ob[i] << endl;
}

