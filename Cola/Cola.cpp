#pragma once
#include <iostream>
#include <conio.h>
#include "Cola.h"

using namespace std;

Cola::Cola()
{
    raiz = NULL;
    fondo = NULL;
}

void *Cola::insertar(void *p, int x){
    Nodo *nuevo;
    nuevo = new Nodo();
    nuevo->info = x;
    nuevo->sig = NULL;
    if (vacia()) 
    {
        raiz = nuevo;
        fondo = nuevo;
    }
    else {
        fondo->sig = nuevo;
        fondo = nuevo;
    }
    return(p);
}

void *Cola::extraer(void *p){
    if (!vacia())
    {
        //int informacion = raiz->info;
        Nodo *bor = raiz;
        if (raiz == fondo)
        {
            raiz = NULL;
            fondo = NULL;
        }
        else 
        {
            raiz = raiz->sig;
        }
        delete bor;
        //return informacion;
    }
    cout << "\n\nEl elemento ha sido eliminado con exito\n" << endl;
    getchar();
    return(p);
}

void Cola::imprimir(void *p){
    Nodo *reco = raiz;
    cout << "\n\nListado de todos los elementos de la cola: \n\n";
    while (reco != NULL)
    {
        cout << reco->info << "\n";
        reco = reco->sig;
    }
    cout << "\n";
    getchar();
}

bool Cola::vacia()
{
    if (raiz == NULL)
        return true;
    else
        return false;
}

double Cola::porcentaje(void *p){
    Nodo* tmp = raiz;
    double prom;
    double cont = 0;
    double numerador = 0;
    while(tmp!=NULL)
    {
    if(tmp->info%2 == 0){
        numerador++;
    }
        tmp=tmp->sig;
        cont++;
    }
    prom = (numerador/cont)*100;
    cout << "\nEl porcentaje es: " << prom << "%";
    getchar();
    return prom;
}
