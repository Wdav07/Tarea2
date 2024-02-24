#include <iostream>
using namespace std;
main(){
	int n1=0,n2=0,n3=0,n4=0,promedio=0;
	cout<<"ingrese nota 1: ";
	cin>>n1;
	cout<<"ingrese nota 2: ";
	cin>>n2;
	cout<<"ingrese nota 3: ";
	cin>>n3;
	cout<<"ingrese nota 4: ";
	cin>>n4;
	promedio=(n1+n2+n3+n4) / 4;
	
	string mensaje = "";
	mensaje=promedio>=61 ? "aprobado" : "reprobado";
	cout<<"Su promedio es de :"<<promedio<<" Por lo tanto: "<<mensaje<<endl;
	
	if(promedio>=0 && promedio<=60){
	cout<<"mala nota"<<endl;
	}

	if(promedio>=61 && promedio<=80){
	cout<<"buena nota"<<endl;
	}
	if(promedio>8){
	cout<<"excelente nota"<<endl;
	}

	
	
	system("pause");
}