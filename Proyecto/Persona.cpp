#pragma once
#include "Persona.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>
#include <string.h>

using namespace std;

Persona::Persona(string _nombre, string _apellido, string _modelo, double _precio, int _cedula, Persona* _siguiente = NULL, Persona* _anterior = NULL){
    this-> nombre = _nombre;
    this-> apellido = _apellido;
    this-> modelo = _apellido;
    this-> precio = _precio;
    this-> cedula = _cedula;
	this-> siguiente = _siguiente;
    this-> anterior = _anterior;
}

Persona::Persona(){
	
}

void Persona::setModelo(string newModelo){
    this-> modelo = newModelo;
}

string Persona::getModelo(){
    return this->modelo;
}

void Persona::setPrecio(double newValor){
	this-> precio = newValor;
}

double Persona::getPrecio(){
	return this->precio;
}

void Persona::setSiguiente(Persona* newSiguiente){
	this -> siguiente = newSiguiente;
}

Persona *Persona::getSiguiente(){
    return this->siguiente;
}

void Persona::setAnterior(Persona* newAnterior){
	this -> anterior = newAnterior;
}

Persona *Persona::getAnterior(){
    return this->anterior;
}

string Persona::getNombre(){
    return this->nombre;
}

void Persona::setNombre(string _nombre){
    this->nombre = _nombre;
}

string Persona::getApellido(){
    return this->apellido;
}
void Persona::setApellido(string newApellido){
    this->apellido = newApellido;
}
int Persona::getCedula(){
    return this->cedula;
}
void Persona::setCedula(int newCedula){
    this->cedula = newCedula;
}
