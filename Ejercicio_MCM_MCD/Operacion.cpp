/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    #Grupo 7
				Brandon Raul Masacela - 	 brmasacela@espe.edu.ec
				Juan Francisco Reyes -       jfreyes4@espe.edu.ec
	FECHA DE CREACION:        20-05-2022 	
	FECHA DE MODIFICACION:    23-05-2022
*/

#include "Operacion.h"

Operacion::Operacion(){

}

int Operacion::calularmcm(int a, int b, int c){
    int mcm, mcm2;
    mcm = (a * b)/calcularmcd(a, b);
    mcm2 = (mcm * c)/calcularmcd(mcm, c);
    return mcm2;
}

int Operacion::calcularmcd(int a, int b){
    if(a % b == 0){
        return b;
    }
    else{
        return calcularmcd(b, a % b);
    }   
}

int Operacion::calcularmcd(int a, int b, int c){
    if(a % b == 0 && c % b == 0){
        return b;
    }
    else{
        return calcularmcd(b, a % b, c % b);
    }
    
}
