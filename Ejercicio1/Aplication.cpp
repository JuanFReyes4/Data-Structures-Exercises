#include"Operation.cpp"
#include"Process.cpp"
#include"Ingreso.h"
#include <stdio.h>
#include <sstream>
#include<iostream>
using namespace std;

int main(){
	Operation objOp;
	Process objProc;
	Ingreso objEntry;
	float a,b,c,d;
	string dim;
		dim=objEntry.leer("Ingrese el valor de a",2);
    	istringstream (dim) >> a;
		objOp.setNumA(a);
		dim=objEntry.leer("Ingrese el valor de b",2);
    	istringstream (dim) >> b ;
		objOp.setDenB(b);
		dim=objEntry.leer("Ingrese el valor de c",2);
    	istringstream (dim) >> c;
		objOp.setNumC(c);
		dim=objEntry.leer("Ingrese el valor de d",2);
    	istringstream (dim) >> d;
		objOp.setDenD(d);
	objProc.calculate(objOp);	
	return(0);
}