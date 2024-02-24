#include <iostream>
using namespace std;
main(){
//and (y) &&
//or (o) ||
//ejemplo: puede entrar a la clase si trae lapiz y lapicero 
	char lapiz, lapicero, cuaderno; 
	cout<<"trae lapiz (s/n) : ";
	cin>>lapiz; 
	cout<<"trae lapicero (s/n): ";
	cin>>lapicero;
	cout<<"trae cuaderno (s/n): ";
	cin>>cuaderno;
	//and = el valor es verdadero si ambas son verdaderas 
	// or (o) = valor es verdadero si por lo menos una es verdadero
	// puede traer un lapiz o un lapicero y  un cuaderno
	
	if ((lapiz=='s' || lapicero=='s') && cuaderno=='s' ){
		cout<<"ingresar "<<endl;
	
		
	} else {
		cout<<"no puede ingresar"<<endl;
		
	}
	
	system("pause");
}