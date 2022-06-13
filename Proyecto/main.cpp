#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <string.h>
#include "Persona.cpp"
#include "Almacen.cpp"

using namespace std;

int main(int argc, char** argv) {
    Almacen obj;
    string n,a,m;
    double precio;
    int cedula;
    string opc;
        do{
        cout<<"Ingrese el nombre:";cin>>n;
        obj.validacionCelular(n);
        }while(n != true);
        cout<<"Ingrese el apellido:";cin>>a;
        obj.validacionCelular(a);
        cout<<"Ingrese el cedula:";cin>>cedula;
        cout<<"Ingrese el modelo:";cin>>m;
        obj.validacionCelular(m);
        precio = obj.convertirDouble();

    if (obj.vacio() == false){
        do{
            obj.comprarCelular(n,a,m,precio,cedula);
            cout<<"Desea comprar otro celular s/n:";cin>>opc;
            obj.validacionCelular(opc);
        }while (opc != "n" && opc != "N");
    }else{
        cout <<"\nEl almacen no tiene celulares\n";
    } 
	return 0;
}
