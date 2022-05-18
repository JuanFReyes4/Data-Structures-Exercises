
#include "Array.cpp"
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	Array num;
	int a,b,x;
	
	cout << "Ingrese primer numero"  << "\n";
    
	cin >> a; 
	
	cout << "Ingrese segundo numero"  << "\n";
    
	cin >> b; 
	int res=0;
	res=a+b;
	if(res%2==0){
		 x=0;
		 }else{x=10;}
	
	
    num.setN(x);
    cout << "1 true / 0 false:"<<endl;
    cout << "Antes del Logical Not:";
    num.dispNum(); 
    cout << endl;
     
    !num;
    cout << "Despues del logical not:";
    num.dispNum(); 
    cout << endl;
       
	return 0;
}

