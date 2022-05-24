#include "Binario.h"

void Binario::decimalBinario(int val, char *cad){
	if(val >= 1){
		decimalBinario(val/2, cad);
		itoa(val%2, cad + strlen(cad), 10);
	}
	strcat(cad,"\0");
}
