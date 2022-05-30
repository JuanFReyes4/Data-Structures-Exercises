/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    #Grupo 7
				Brandon Raul Masacela - 	 brmasacela@espe.edu.ec
				Juan Francisco Reyes -       jfreyes4@espe.edu.ec
	FECHA DE CREACION:        20-05-2022 	
	FECHA DE MODIFICACION:    23-05-2022
*/

#pragma once

class Nodo{
	private:
		int valor;
		Nodo *siguiente;
	public:
		Nodo();
		Nodo(int, Nodo*);
		Nodo(int);
		int getValor();
		void setValor(int);
		Nodo *getSiguiente();
		void setSiguiente(Nodo*);
		friend class Lista;
};
