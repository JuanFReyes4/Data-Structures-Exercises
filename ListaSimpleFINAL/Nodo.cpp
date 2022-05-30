/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    #Grupo 7
				Brandon Raul Masacela - 	 brmasacela@espe.edu.ec
				Juan Francisco Reyes -       jfreyes4@espe.edu.ec
	FECHA DE CREACION:        29-05-2022 	
	FECHA DE MODIFICACION:    29-05-2022
*/

#pragma once
#include "Nodo.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

Nodo::Nodo(int _valor, Nodo* _siguiente = NULL){
	this-> valor = _valor;
	this-> siguiente = _siguiente;
}

Nodo::Nodo(){
	
}

Nodo::Nodo(int _valor){
	this-> valor = _valor;
}

void Nodo::setValor(int newValor){
	this-> valor = newValor;
}

int Nodo::getValor(){
	return this->valor;
}

void Nodo::setSiguiente(Nodo* newSiguiente){
	this -> siguiente = newSiguiente;
}

Nodo *Nodo::getSiguiente(){
    return this->siguiente;
}
