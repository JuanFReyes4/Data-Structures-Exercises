#pragma once
#include "Nodo.h"

Nodo::Nodo(int _valor, Nodo *_siguiente = NULL){
    this->info = _valor;
	this->sig= _siguiente;
}

Nodo::Nodo(){

}