/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    #Grupo 7
				Brandon Raul Masacela - 	 brmasacela@espe.edu.ec
				Juan Francisco Reyes -       jfreyes4@espe.edu.ec
	FECHA DE CREACION:        20-05-2022 	
	FECHA DE MODIFICACION:    23-05-2022
*/

#include "Binario.h"

void Binario::decimalBinario(int val, char *cad){
	if(val >= 1){
		decimalBinario(val/2, cad);
		itoa(val%2, cad + strlen(cad), 10);
	}
	strcat(cad,"\0");
}
