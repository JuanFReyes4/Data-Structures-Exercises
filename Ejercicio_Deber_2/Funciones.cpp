#include "Funciones.h"

Funciones::Funciones(){	
}

char *Funciones::ingresoDato(const char *msj){
	char *dato = new char[0],c;
    int i=0;
    int cont = 0;
    bool band = false;
    printf("%s", msj);
    while((c = getch())!=13){
        if(c=='.' && cont<1){
            cont++;
            band=true;
            printf("%c", c);
            dato[i++]=c;
        }else if((c>='0' && c<='9')){
            printf("%c", c);
            dato[i++]=c;
        }else if(c == '\b'){
            cout << "\b" ;
            dato[i--]=c;
        }
    }
    dato[i]= '\0';
    return dato;
}

int Funciones::convertirFloat(){
    char dato[10];
    int valor = 0;
    float valorFlotante;
    strcpy(dato, ingresoFloat("Ingrese dato del tipo Flotante: "));
    valorFlotante=atof(dato)*2;
    printf("\nResultado:%.2f...",valorFlotante);
    return valor;
}

char *Funciones::ingresoDato(const char *msj){
    char *dato = new char[0],c;
    int i=0;
    printf("%s", msj);
    while((c = getch())!=13){
        if(c>='0' && c<='9'){
            printf("%c", c);
            dato[i++]=c;
        }if(c == '\b'){
        cout << "\b" ;
        dato[i--]=c;
        }
    }
    dato[i]= '\0';
    return dato;
}

int Funciones::convertirEntero(){
    char dato[10];
    int valor = 0;
    strcpy(dato, ingresoEntero("Ingrese dato del tipo Entero: "));
    valor=atoi(dato);
    valor=valor*2;
    printf("\nResultado:%d...",valor);
    return valor;
}

char *Funciones::ingresoDato(const char *msj){
    char *dato = new char[0],c;
    int i=0;
    printf("%s", msj);
    while((c = getch())!=13){
        if((c>='A' && c<='Z') || (c>='a' && c<='z')){
            printf("%c", c);
            dato[i++]=c;
        }else if(c == '\b'){
            cout << "\b" ;
            dato[i--]=c;
        }
    }
    dato[i]= '\0';
    return dato;
}

int Funciones::convertirString(){
    char dato[10];
    int valor = 0;
    strcpy(dato, ingresoString("Ingrese dato del tipo String: "));
    printf("\nResultado:%s...",dato);
    return valor;
}
