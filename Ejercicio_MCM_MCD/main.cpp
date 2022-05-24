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
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include "Operacion.cpp"

using namespace std;

int main(int argc, char** argv) {
	int a,b,c;
    Operacion obj;
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    cout << "Ingrese el tercer numero: ";
    cin >> c;
    cout << "El mcm de los numeros " << a << " , " << b << " y " << c << ": " << obj.calularmcm(a, b, c) << endl;
    cout << "El mcd de los numeros " << a << " , " << b << " y " << c << ": " << obj.calcularmcd(a, b, c) << endl;
    system("pause");
	return 0;
}
