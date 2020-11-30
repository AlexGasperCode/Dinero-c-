//La sentencia switch
#include<iostream>
using namespace std;
 int main (){
     int fondo = 3000 , dig;
     float mas , saldo = 0 , retiro;

     cout<<"\tCUENTA DE AHORROS"<<endl;
     cout<<"1. Ingresar dinero a la cuenta"<<endl;
     cout<<"2. Retirar dinero de la cuenta"<<endl;
     cout<<"3. Salir"<<endl;
     cout<<"Eligir opcion:";
     cin>>dig;
     
     switch (dig){
     	case 1: 
     	 cout<<"Ingresar dinero en su cuenta:";
     	 cin>>mas;
     	 saldo = fondo + mas;
     	 cout<<"Dinero en cuenta:"<<saldo;break;
     	 
     	case 2:
     	cout<<"Dinero a retirar de cuenta:";
     	cin>>retiro;
     	
     	if(retiro > fondo){
     		cout<<"No tiene esa cantidad de dinero";
		 }
		 
		else{
			saldo = fondo - retiro;
		    cout<<"Saldo en actual:"<<saldo;
		}  
     	case 3: break;
	 }
	return 0;
}
