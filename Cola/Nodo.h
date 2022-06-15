#pragma once
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

class Nodo{
	private:
		int info;
		Nodo *sig;
	public:
		Nodo(int, Nodo *);
        Nodo();
		friend class Cola;
};