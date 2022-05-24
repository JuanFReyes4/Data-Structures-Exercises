/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    #Grupo 7
				Brandon Raul Masacela - 	 brmasacela@espe.edu.ec
				Juan Francisco Reyes -       jfreyes4@espe.edu.ec
	FECHA DE CREACION:        20-05-2022 	
	FECHA DE MODIFICACION:    23-05-2022
*/

#include <iostream>
#include <cstring>
#include "Binario.cpp"

int main(int argc, char **argv)
{
	Binario bin;
	char *cad = new char[10];
	cad[0] = '\0';
	bin.decimalBinario(124, cad);
	
	printf("%s ", cad);
	
	return 0;
}

