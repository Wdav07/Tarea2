#include <iostream>
using namespace std;
main(){
	//numero es positivo >0 O negativo<0
	int num=0;
	cout<<"ingrese el numero: ";
	cin>>num;
	if(num>0){
		//entra aca cuando la condicion es verdadera 
		cout<<"Positivo"<<endl;
	}
	else{
		//anidar estructura 
		if(num==0){
			cout<<"neutro"<<endl;
		}
		else{
			cout<<"negativo"<<endl;
		}
	}
	
	system("pause");
}