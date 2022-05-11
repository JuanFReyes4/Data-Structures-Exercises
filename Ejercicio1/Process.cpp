#include "Process.h"
#include <stdio.h>
#include<iostream>
#include <math.h>
#include<stdlib.h>
#include<conio.h>
#include <stdio.h>
using namespace std;

void Process::calculate(Operation x){
	Process anws;
		anws.setNum((x.getNumA()*x.getDenD())+(x.getDenB()*x.getNumC()));
		anws.setDen(x.getDenB()*x.getDenD());
		cout <<"El resultado es	"<<anws.getNum()<<"/"<<anws.getDen()<<endl;
}

float Process::getNum(void){
   return num;
}

void Process::setNum(float newNum){
   num = newNum;
}

float Process::getDen(void){
   return den;
}

void Process::setDen(float newDen){
   den = newDen;
}

Process::Process(){
}