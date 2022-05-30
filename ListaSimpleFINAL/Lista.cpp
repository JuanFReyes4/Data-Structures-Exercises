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
#include "Lista.h"
#include <limits>

Lista::Lista(){
		this -> primero = NULL;
		this -> actual = NULL;
}

void Lista::insertarCola(int _valor){
	Nodo *nuevo = new Nodo(_valor, NULL);
	if (this -> primero == NULL){
		this -> primero = nuevo;
	}else{
		this->actual->setSiguiente(nuevo);
	}
		this->actual=nuevo;
}

void Lista::mostarCola(){
	Nodo* tmp = this->primero;
	while(tmp != NULL){
		cout << tmp -> getValor() << "->";
		tmp = tmp -> getSiguiente();
    }
		cout << "NULL" << endl;
}

void Lista::insertarCabeza(int _valor){
    Nodo *nuevo = new Nodo(_valor, NULL);
    nuevo->setSiguiente(primero);
    this->primero = nuevo; 
    this->actual = nuevo;  
}

void Lista::mostrarCabeza(){
    Nodo *tmp = this->primero;
    if (tmp == NULL)
    {
        cout<<"Fila vacia";
    }else
    {
        while (tmp != NULL)
    {
        cout << tmp -> getValor() << "->";
        tmp = tmp->getSiguiente();
    }
    cout << "NULL" << endl;
    }

}

void Lista::buscar(int dat){
    int cont=0;
    int pos=0;
    bool flag;
    cout << "Buscando el " << dat << " de la lista" << endl;
    Nodo* actual = new Nodo();
    actual = primero;
    if (primero != NULL){
        while(actual != NULL){
            cont++;
            if(actual->getValor()==dat){
            actual = actual->getSiguiente();
            flag = true;
            pos = cont;
        }else{
            actual = actual->getSiguiente();
        }   
    }
    if (flag){
        cout << "El numero solicitado SE ENCUENTRA en la lista..." << endl;
    }else{
        cout << "El numero solicitado NO SE ENCUENTRA en la lista..." << endl;
    }
}else{
    cout << "Lista vacia" << endl;
}
}

void Lista::eliminar(int a){
    bool flag = false;
    cout << "Busacando el "<< a << " de la lista";
    Nodo *nuevo = new Nodo();
    nuevo = this->primero;
    if (this->primero != NULL)
    {
        while (nuevo != NULL)
        {
            if (nuevo->valor == a)
            {
                nuevo->valor = nuevo->siguiente->valor;
                nuevo->siguiente = nuevo->siguiente->siguiente;
                flag = true;
            }
            else
            {
                nuevo = nuevo->siguiente;
            }    
        }
        delete(nuevo); 
        if (flag)
        {
            cout<<"\nDato eliminado de la lista...";
        }
        else
        {
            cout<<"\nNo existe el dato en la lista...";
        }
    }
    else
    {
        cout<<"\nLista vacia";
    }
}

char *Lista::ingresoEntero (const char *msj){
    char *dato = new char[0], c;
    int i=0;
    printf("%s", msj);
    while((c = getch())!=13){
        if(c>='0' && c<='9'){
            printf("%c", c);
            dato[i++]=c;
        }if(c == '\b'){
			cout << "\b";
            fflush(stdin);
			dato[i--]=c;
        }

    }
    dato[i]= '\0';
    return dato;
}

int Lista::convertirEntero(){
    char dato[10];
    int valor = 0;
    strcpy(dato, ingresoEntero("\nIngrese el dato: "));
    valor=atoi(dato);
    return valor;
}

int Lista::convertirEnteroMenu(){
    char dato[10];
    int valor = 0;
    strcpy(dato, ingresoEnteroMenu("\nEscoger opcion: "));
    valor=atoi(dato);
    return valor;
}

char *Lista::ingresoEnteroMenu(const char *msj){
    char *dato = new char[0], c;
    int i=0;
    printf("%s", msj);
    while((c = getch())!=13){
        if(c>='0' && c<='9'){
            printf("%c", c);
            dato[i++]=c;
        }if(c == '\b'){
			cout << "\b";
            fflush(stdin);
			dato[i--]=c;
        }

    }
    dato[i]= '\0';
    return dato;
}
