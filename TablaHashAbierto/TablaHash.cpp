#pragma once 
#include <iostream>
#include "Nodo.h"
#include "Nodo.cpp"
#include <cstring>
#include "TablaHash.h"
#define NCASILLAS 10

TablaHashAbierto::TablaHashAbierto(){
    tabla = new NodoCircular*[NCASILLAS];
    for(int i = 0; i < NCASILLAS; i++){
        tabla[i] = NULL;
    }
}

TablaHashAbierto::~TablaHashAbierto(){
    for(int i = 0; i < NCASILLAS; i++){
        NodoCircular *aux = tabla[i];
        aux = tabla[i];
        while(aux != NULL){
            tabla[i] = tabla[i]->getSig();
            delete(aux);
            aux = tabla[i];
        }
    }
    delete[] tabla;
}

void TablaHashAbierto::insertar(string cad){
    int pos = hash(cad);
    NodoCircular *aux = tabla[pos];
    if(tabla[pos] == NULL){
        tabla[pos] = new NodoCircular(cad);
    }
    else{
        aux = tabla[pos];
        while(aux->getSig() != NULL){
            aux = aux->getSig();
        }
        aux->setSig(new NodoCircular(cad));
    }
}
void TablaHashAbierto::eliminar(string cad){
    int pos = hash(cad);
    NodoCircular *aux = tabla[pos];
    if(aux->getCadena() == cad){
        cout<<"Eliminado el elemento..."<< pos;
        delete(tabla[pos]);
        tabla[pos] = tabla[pos]->getSig();
    }else{
        cout<<"Elemento no encontrado";
    }
}
void TablaHashAbierto::imprimir(){
    for(int i = 0; i < NCASILLAS; i++){
        NodoCircular *aux = tabla[i];
        aux = tabla[i];
        while(aux != NULL){
            cout << i <<"<-"<<aux->getCadena() <<" ";
            aux = aux->getSig();
        }
        cout << endl;
    }
}

void TablaHashAbierto::buscar(string cad){
    int pos = hash(cad);
    NodoCircular *aux = tabla[pos];
    if(aux->getCadena() == cad){
        cout<<"Elemento encontado en la pos "<< pos;
        tabla[pos] = tabla[pos]->getSig();
    }else{
        cout<<"Elemento no encontrado";
    }
}

int TablaHashAbierto::hash(string cad){
    int suma = 0;
    for(int i = 0; i < cad.length(); i++){
        suma += cad[i];
    }
    return suma % NCASILLAS;
}