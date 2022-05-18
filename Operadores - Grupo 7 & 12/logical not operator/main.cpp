#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "operadores.h"
#include "operadores.cpp"
using namespace std;

int main(){
    
                    int filas;
                    int columnas;
                    cout<<"Sobrecarga del operador %="<<endl;
                    cout<<"Ingrese el valor de filas: ";
                    cin>>filas;
                    cout<<"Ingrese el valor de columnas: ";
                    cin>>columnas;
                    operar m1(filas,columnas);
                    for(int i = 0; i < filas; i++){//recorremos las filas
                        for(int j = 0; j < columnas; j++){//recorremos las columnas
                            cout<<"Ingrese el valor de la posicion ("<<i<<","<<j<<"): ";//recibimos el valor
                            int v;
                            cin>>v;
                            m1.setValor(i,j,v);//imprimimos el valor
                        }
                    }
                    cout<<"Matriz 1"<<endl;
                    m1.imprimir();//imprimimos la matriz
                    cout<<"Matriz 2 efectuando la sobrecarga del operador %="<<endl;
                    m1 %= 2;//sobrecarga del operador %=
                    m1.imprimir();//imprimimos la matriz
                    return 0;
                
}
