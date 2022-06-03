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

class Nodo{
	private:
		int valor;
		Nodo *siguiente;
        Nodo *anterior;
	public:
		Nodo();
		Nodo(int, Nodo*, Nodo*);
		Nodo(int);
		int getValor();
		void setValor(int);
		Nodo *getSiguiente();
		void setSiguiente(Nodo*);
        Nodo *getAnterior();
		void setAnterior(Nodo*);
		friend class Lista;
};