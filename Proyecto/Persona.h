#pragma once
#include <stdlib.h>
#include <string>
#include <string.h>

using namespace std;

class Persona{
	private:
		string modelo;
		string nombre;
		string apellido;
        double precio;
		int cedula;
		Persona *siguiente;
        Persona *anterior;
	public:
		Persona();
		Persona(string, string, string, double, int, Persona*, Persona*);
		
		Persona *getSiguiente();
		void setSiguiente(Persona*);
        
		Persona *getAnterior();
		void setAnterior(Persona*);
        
		string getModelo();
        void setModelo(string);
        
		double getPrecio();
        void setPrecio(double);
		
		string getNombre();
        void setNombre(string);
		
		string getApellido();
        void setApellido(string);
		
		int getCedula();
		void setCedula(int);
		
		friend class Almacen;
};