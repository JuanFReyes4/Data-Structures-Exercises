/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    #Grupo 7
				Brandon Raul Masacela - 	 brmasacela@espe.edu.ec
				Juan Francisco Reyes -       jfreyes4@espe.edu.ec
	FECHA DE CREACION:        02-06-2022 	
	FECHA DE MODIFICACION:    02-06-2022
*/
#pragma once
#include "Lista.h"

Lista::Lista(){
    this -> primero = NULL;
	this -> actual = NULL;
}

void Lista::insertarCola(int _valor){
    Nodo *nuevo = new Nodo(_valor, NULL, NULL);
    nuevo->valor;
    if (primero == NULL)
    {
        primero = nuevo;
        primero->setSiguiente(NULL);
        primero->setAnterior(NULL);
        actual = primero;
    }else
    {
        actual->setSiguiente(nuevo);
        nuevo->setSiguiente(NULL);
        nuevo->setAnterior(actual);
        actual = nuevo;
    }
    cout <<"\n\tDato ingresado"; 
}

void Lista::insertarCabeza(int _valor){
    Nodo *nuevo = new Nodo(_valor, NULL, NULL);
    nuevo->valor;
    nuevo->setAnterior(NULL);
    nuevo->setSiguiente(primero);
    if(primero != NULL){
        primero->setAnterior(nuevo);
    }
    primero = nuevo;
    cout <<"\n\tDato ingresado"; 
}

void Lista::insertarPosicion(int _valor, int pos){
    int i;
    Nodo *nuevo = new Nodo();
    nuevo->valor = _valor;
    nuevo->setSiguiente(NULL);
    nuevo->setAnterior(NULL);
    if(pos < 1){
        cout<<"\nLa posicion debe ser mayor a 1";
    }else if (pos == 1)
    {
        nuevo->setSiguiente(primero);
        primero->setAnterior(nuevo);
        primero = nuevo;
    }else{
        Nodo *tmp = this->primero;
        for(int i = 1; i < pos-1; i++){
            if(tmp != NULL){
                tmp = tmp->siguiente;
            }
        }
        if(tmp != NULL){
            nuevo->setSiguiente(tmp->siguiente);
            nuevo->setAnterior(tmp);
            tmp->setSiguiente(nuevo);
            if(nuevo->siguiente != NULL)
            nuevo->siguiente->anterior = nuevo;
        }else{
            cout<<"El anterior nodo es NULL";
        }
    }
}

void Lista::mostar(){
    Nodo* tmp = this->primero;
    if (tmp != NULL)
    {
        while(tmp != NULL){
            cout << tmp -> getValor() << "<->";
            tmp = tmp -> getSiguiente();
        }
		cout << "NULL" << endl;
    }else
    {
        cout<<"\n\tLa lista esta vacia";
    }
}

void Lista::buscar(int dat){
    bool flag = false;
    cout << "Buscando el " << dat << " en la lista" << endl;
    Nodo* actual = new Nodo();
    actual = primero;
    if (primero != NULL){
        while(actual != NULL){
            if(actual->getValor()==dat){
                actual = actual->getSiguiente();
                flag = true;
            }else
            {
                actual = actual->getSiguiente();
            }   
        }
        if (flag){
            cout << "El nodo solicitado SE ENCUENTRA en la lista..." << endl;
        }else{
            cout << "El nodo solicitado NO SE ENCUENTRA en la lista..." << endl;
        }
    }else{
        cout << "Lista vacia" << endl;
    }
}

void Lista::eliminarCola(){
	Nodo* nuevo = new Nodo();
	nuevo = primero;
	Nodo* atras = new Nodo();
	atras = NULL;
	bool flag = false;
	if(primero!=NULL){
		while(nuevo!=NULL && flag!=true){
			if(nuevo->valor == actual->valor){
				cout <<"\nEliminando "<<actual->valor<<"......";
				if(nuevo==primero){
					primero = primero->siguiente;
					primero->anterior = NULL;
				}else if(nuevo==actual){
					atras->siguiente = NULL;
					actual = atras;
				}else{
					atras->siguiente = nuevo->siguiente;
					nuevo->siguiente->anterior = atras;
				}
				cout << "\nNodo Eliminado";
				flag = true;
                delete(nuevo);
			}
			atras = nuevo;
			nuevo = nuevo->siguiente;
		}
		if(!flag){
			cout <<"\nLa lista se encuentra Vacia";
		}
    }
}

void Lista::eliminarCabeza(){
    Nodo* nuevo = new Nodo();
	nuevo = primero;
	Nodo* atras = new Nodo();
	atras = NULL;
	bool flag = false;
	if(primero!=NULL){
		while(nuevo!=NULL && flag!=true){
			if(nuevo->valor == primero->valor){
				cout <<"\nEliminado "<<primero->valor<<"......";
				if(nuevo==primero){
					primero = primero->siguiente;
					primero->anterior = NULL;
				}else if(nuevo==actual){
					atras->siguiente = NULL;
					actual = atras;
				}else{
					atras->siguiente = nuevo->siguiente;
					nuevo->siguiente->anterior = atras;
				}
				cout << "\nNodo Eliminado";
				flag = true;
                delete(nuevo);
			}
			atras = nuevo;
			nuevo = nuevo->siguiente;
		}
		if(!flag){
			cout <<"\nLa lista se encuentra Vacia";
		}
    }
}

void Lista::eliminarNodo(int _valor){
    Nodo* nuevo = new Nodo();
	nuevo = primero;
	Nodo* atras = new Nodo();
	atras = NULL;
	bool flag = false;
	if(primero!=NULL){
		while(nuevo!=NULL && flag!=true){
			if(nuevo->valor == _valor){
				cout <<"\nEliminado "<<_valor<<"......";
				if(nuevo==primero){
					primero = primero->siguiente;
					primero->anterior = NULL;
				}else if(nuevo==actual){
					atras->siguiente = NULL;
					actual = atras;
				}else{
					atras->siguiente = nuevo->siguiente;
					nuevo->siguiente->anterior = atras;
				}
				cout << "\nNodo Eliminado";
				flag = true;
                delete(nuevo);
			}
			atras = nuevo;
			nuevo = nuevo->siguiente;
		}
		if(!flag){
			cout <<"\nNo se encontro el nodo";
		}
    }
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