/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    #Grupo 7
				Brandon Raul Masacela - 	 brmasacela@espe.edu.ec
				Juan Francisco Reyes -       jfreyes4@espe.edu.ec
	FECHA DE CREACION:        02-06-2022 	
	FECHA DE MODIFICACION:    02-06-2022
*/
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include "Lista.cpp"
#include "Nodo.cpp"

void menu(){

    Lista obj;
	int dato;
    int op;
    int pos;
    bool bucleMenu = true;

    do {

        system("cls");
        
        cout << "----------- GRUPO 7 -----------" << endl;
        cout << " Brandon Masacela --- Juan Reyes" << endl;
        cout << "\n";
        cout << "1 -> Ingresar datos por cabeza" << endl;
        cout << "2 -> Ingresar datos por cola" << endl;
        cout << "3 -> Ingresar por posicion" << endl;
        cout << "4 -> Eliminar por cabeza" << endl;
        cout << "5 -> Eliminar por cola" << endl;
        cout << "6 -> Eliminar por cualquier posicion" << endl;
        cout << "7 -> Mostrar" << endl;
        cout << "8 -> Buscar" << endl;
		cout << "9 -> Salir" << endl;
        cout << "\n";
        cout << "**Seleccione opcion (1 - 8) para usar el programa";
        cout << "\n**PRESIONE EL NUMERO NUEVE PARA SALIR" << endl;
        op = obj.convertirEnteroMenu();
        cout << endl;

        switch (op) {

            case 1:
                cout<<"Ingrese 0 para finalizar la lista";
                do{
					dato = obj.convertirEntero(); 
					obj.insertarCabeza(dato);
				}while (dato != 0);
				cout<<"\n";
                fflush(stdin);
				cout<<"\nPresione ENTER para continuar...";
                system("pause > nul"); // Pausa
                break;

            case 2:
                cout<<"Ingrese 0 para finalizar la lista";
            do{
					dato = obj.convertirEntero(); 
					obj.insertarCola(dato);
				}while (dato != 0);
				cout<<"\n";
                fflush(stdin);
				cout<<"\nPresione ENTER para continuar...";
                system("pause > nul"); // Pausa
                break;
            
            case 3:
				dato = obj.convertirEntero(); 
                cout<<"\nIngrese la posicion >= 1: ";
                cin>>pos;
				obj.insertarPosicion(dato,pos);
				cout<<"\n";
                fflush(stdin);
				cout<<"\nPresione ENTER para continuar...";
                system("pause > nul"); // Pausa
                break;
            
            case 4:
				obj.eliminarCabeza();
				cout<<"\n";
                fflush(stdin);
				cout<<"\nPresione ENTER para continuar...";
                system("pause > nul"); // Pausa
                break;
            
            case 5:
				obj.eliminarCola();
				cout<<"\n";
                fflush(stdin);
				cout<<"\nPresione ENTER para continuar...";
                system("pause > nul"); // Pausa
                break;

            case 6:
                int b;
				cout << "Ingrese el dato a eliminar en la lista: ";
				cin >> b;
				obj.eliminarNodo(b);
				cout<<"\n";
				fflush(stdin);
				cout<<"\nPresione ENTER para continuar...";
                system("pause > nul");
                break;

            case 7:
                cout<<"Los elementos de la lista son -> ";
                obj.mostar();
				cout<<"\n";
                fflush(stdin);
				cout<<"\nPresione ENTER para continuar...";
                system("pause > nul"); // Pausa
                break;

            case 8:
                int f;
                cout << "Ingrese el valor a buscar: ";
                cin >> f;
                obj.buscar(f);
                fflush(stdin);
				cout<<"\nPresione ENTER para continuar...";
                system("pause > nul"); // Pausa
                break;

            case 9:
                bucleMenu = false;
                cout << "Muchas gracias por usar nuestro programa!" << endl;
                break;
        }
    } while (bucleMenu);
}