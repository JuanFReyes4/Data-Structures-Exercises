#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

//Sobrecarga del operador %=
class operar{
    private:
        int **m;//matriz
        int filas;//filas
        int columnas;//columnas
    public:
        operar(int filas, int columnas){
            this->filas = filas;
            this->columnas = columnas;
            this->m = new int*[filas];
            for(int i = 0; i < filas; i++){
                this->m[i] = new int[columnas];
            }
        }
        operar(){
            this->filas = 0;
            this->columnas = 0;
            this->m = NULL;
        }
        int getFilas(){
            return this->filas;
        }
        int getColumnas(){
            return this->columnas;
        }
        int getValor(int f, int c){
            return this->m[f][c];
        }
        void setValor(int f, int c, int v){
            this->m[f][c] = v;
        }
        void imprimir(){
            for(int i = 0; i < this->filas; i++){//recorremos las filas
                for(int j = 0; j < this->columnas; j++){//recorremos las columnas
                    cout << this->m[i][j] << " ";//imprimimos el valor
                }
                cout << endl;
            }
        }
        operar operator%=(int n){//sobrecarga del operador %=
            for(int i = 0; i < this->filas; i++){//recorremos las filas
                for(int j = 0; j < this->columnas; j++){//recorremos las columnas
                    this->m[i][j] = this->m[i][j]%n;//imprimimos el valor
                }
            }
            return *this;
        }
};
