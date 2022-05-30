/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    #Grupo 7
				Brandon Raul Masacela - 	 brmasacela@espe.edu.ec
				Juan Francisco Reyes -       jfreyes4@espe.edu.ec
	FECHA DE CREACION:        29-05-2022 	
	FECHA DE MODIFICACION:    29-05-2022
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include "Lista.cpp"
#include "Nodo.cpp"

using namespace std;

int main (int argc, char** argv){
	
	Lista obj;
	int dato;
    int op;
    bool bucleMenu = true;

    do {

        system("cls");
        
        cout << "----------- GRUPO 7 -----------" << endl;
        cout << " Brandon Masacela --- Juan Reyes" << endl;
        cout << "\n";
        cout << "1 -> Ingresar datos por cabeza" << endl;
        cout << "2 -> Ingresar datos por cola" << endl;
        cout << "3 -> Buscar la primera ocurencia" << endl;
        cout << "4 -> Eliminar un dato de la lista" << endl;
		cout << "5 -> Salir" << endl;
        cout << "\n";
        cout << "**Seleccione opcion (1 - 4) para usar el programa";
        cout << "\n**PRESIONE EL NUMERO CINCO PARA SALIR" << endl;
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
				obj.mostrarCabeza();
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
				obj.mostarCola();
                fflush(stdin);
				cout<<"\nPresione ENTER para continuar...";
                system("pause > nul"); // Pausa
                break;

            case 3:
                int f;
                cout << "Ingrese el valor a buscar: ";
                cin >> f;
                obj.buscar(f);
                obj.mostrarCabeza();
                fflush(stdin);
				cout<<"\nPresione ENTER para continuar...";
                system("pause > nul"); // Pausa
                break;

			case 4:
			    int b;
				cout << "Ingrese el dato a eliminar en la lista: ";
				cin >> b;
				obj.eliminar(b);
				cout<<"\n";
				obj.mostrarCabeza();
				//fflush(stdin);
				cout<<"\nPresione ENTER para continuar...";
                system("pause > nul");
                break;

            case 5:
            	bucleMenu = false;
            	cout << "Muchas gracias por usar nuestro programa!" << endl;
            	break;
        }
    } while (bucleMenu);

	return 0;
}
