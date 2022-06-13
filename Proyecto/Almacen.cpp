#pragma once
#include "Almacen.h"

Almacen::Almacen(){
    this -> primero = NULL;
	this -> actual = NULL;
}

void Almacen::comprarCelular(string _nombre, string _apellido, string _modelo, double _precio, int _cedula){
    Persona *nuevo = new Persona(_nombre, _apellido, _modelo, _precio, _cedula, NULL, NULL);
    nuevo -> nombre;
    nuevo -> apellido;
    nuevo -> cedula;
    nuevo -> modelo;
    nuevo -> precio;
    if (primero == NULL){
        primero = nuevo;
        actual = nuevo;
        primero->setSiguiente(primero);
        primero->setAnterior(actual);
    }else
    {
        actual->setSiguiente(nuevo);
        nuevo->setAnterior(actual);
        nuevo->setSiguiente(primero);
        actual = nuevo;
        primero->setAnterior(actual);
    }
    cout<<"\nCelulares almacenados\n";
}

void Almacen::mostrar(){
    Persona *tmp = this->primero;
    if (tmp != NULL)
    {
        while(tmp->modelo != "0"){
            cout <<"\tNombre:"<<tmp->getNombre()<<"\tApellido:"<<tmp->getApellido()<<"\tCedula:"<<tmp->getCedula()<<"\tModelo:"<<tmp->getModelo()<<"\tPrecio:"<<tmp->getPrecio()<<"\n";
            tmp = tmp -> getSiguiente();
        } 
    }else
    {
        cout<<"\n\tEl almacen esta vacio";
    }
}

double Almacen::venderCelular(string _nombre, string _apellido, string _modelo, double _precio, int _cedula, int _cant){
    Persona* nuevo = new Persona();
	nuevo = primero;
	Persona* atras = new Persona();
	atras = NULL;
	bool encontrado = false;
	string nodoBuscado = _modelo;
    double total;
	if(primero!=NULL){
		do{
			if(nuevo->modelo == nodoBuscado){
                    if(nuevo==primero){
					primero = primero->siguiente;
					primero->anterior = actual;
					actual->siguiente = primero;
                    }else if(nuevo == actual){
					actual = atras;
					actual->siguiente = primero;
					primero->anterior = actual;
                    }else{
					atras->siguiente = nuevo->siguiente;
					nuevo->siguiente->anterior = atras;
                    }	
				encontrado = true;
                total = _cant * nuevo->getPrecio(); 
                delete(nuevo);  			
			}
			atras = nuevo;
			nuevo = nuevo->siguiente;
		}while(nuevo!=primero && encontrado != true);

		if(!encontrado){
			cout << "\n No tenemos disponible ese modelo\n\n";
		}		
	}else{
		cout <<"\nEl almacen no tiene celulares\n";
	}
    return total;
}

void Almacen::buscarStock(string _modelo){
    Persona* tmp = this->primero;
    int cont=0;
    if (tmp != NULL)
    {
        while(tmp->modelo == _modelo){
            cont++;
            tmp = tmp -> getSiguiente();
        }
        if (cont == 0)
        {
            cout<<"\nEl almacen no tiene stock de ese modelo";
        }else
        {
            cout <<"Quedan "<< cont <<" en stock del modelo "<< _modelo;
        }
    }else
    {
        cout<<"\nEl almacen no tiene ningun celular";
    }
}

bool Almacen::vacio(){
    bool flag = false;
    if(primero == NULL){
        flag = true; 
    }
    return flag;
}

char *Almacen::ingresoDouble(const char *msj){
	char *dato = new char[0],c;
    int i=0;
    int cont = 0;
    bool band = false;
    printf("%s", msj);
    while((c = getch())!=13){
        if(c=='.' && cont<1){
            cont++;
            band=true;
            printf("%c", c);
            dato[i++]=c;
        }else if((c>='0' && c<='9')){
            printf("%c", c);
            dato[i++]=c;
        }else if(c == '\b'){
            cout << "\b" ;
            dato[i--]=c;
        }
    }
    dato[i]= '\0';
    return dato;
}

double Almacen::convertirDouble(){
    char dato[10];
    double valorDouble;
    strcpy(dato, ingresoDouble("Ingrese el precio:"));
    valorDouble = atof(dato);
    return valorDouble;
}

int Almacen::validacionCelular(string potatzio) {
	char cadena[80];
    int i = 0;
   
    while (cadena[i]) {
		cadena[i] = potatzio[i];
			// Si no es del alfabeto y no es un espacio regresamos false o 0
        if (!isalpha(potatzio[i]) && potatzio[i] != ' '){
			cout << "No es cadena";
			return 0;
		} 
        i++;
    }
    // Si terminamos de recorrer la cadena y no encontramos errores, regresamos 1 o true
    return 1;
}
