/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:        #Grupo 12
				Luca Manuel de Veintemilla - lmde2@espe.edu.ec
				Kevin Alexander Vargas - 	 kavargas7@espe.edu.ec
					#Grupo 7
				Brandon Raul Masacela - 	 brmasacela@espe.edu.ec
				Juan Francisco Reyes -       jfreyes4@espe.edu.ec
	FECHA DE CREACION:        16-05-2022 	
	FECHA DE MODIFICACION:    17-05-2022*/
#include "Reloj.h"

Reloj::Reloj(int h, int m, int s)
{    hora=h;
     minuto=m;
     segundo=s;
}

void Reloj::DefineTiempo(int h, int m, int s)
{    hora=h;
     minuto=m;
     segundo=s;
}

void Reloj::DefineHora(int h)
{   hora = h;
}

void Reloj::DefineMinuto(int m)
{   minuto = m;
}

void Reloj::DefineSegundo(int s)
{   segundo = s; 
}

int Reloj::Hora(void)
{   return hora; 
}

int Reloj::Minuto(void)
{   return minuto; 
}

int Reloj::Segundo(void)
{   return segundo; 
}

void Reloj::operator ++(void)
{   segundo++;
      if (segundo > 59)
      { segundo -= 60;
          ++minuto;
      }
      if (minuto > 59)
      { minuto -= 60;
          ++hora;
      }
      
      if (hora > 23) hora -= 24;
}
