#include <iostream>
#include <conio.h>
#include<math.h>

using namespace std;

int A=0,B=0,C=0,D,R;

main(){
	
	do{
	A=0;
	B=0;
	C=0;	
			
	cout<<endl<<endl<<"****BIRNVENIDO AL PROGRAMA DE TUS SUEÑOS****"<<endl<<endl;
	void captura (void){
	cout<<"Por favor ingrese 2 digitos: ";
	cin>>A>>B;
	}
	cout<<"**SUMA**"<<endl<<endl;
	C=A+B;
	cout<<"RESULTADO DE LA SUMA: "<<C<<endl;
	
	
	cout<<endl<<endl<<"**EL MAYOR**"<<endl<<endl;
	
	if(A>B){
	cout<<endl<<endl<<"El mayor es: "<<C<<endl<<endl;
	
	}
	else{
		cout<<endl<<endl<<"El mayor es: "<<C<<endl<<endl;
	}
	
	cout<<endl<<endl<<"**POTENCIA DEL MAS PEQUEÑO**";
	if (A<B){
		D= pow(A,3);
			cout<<endl<<endl<<"El resultado es: "<<D;
	}
	else{
	 D= pow(B,3);
	 	cout<<endl<<endl<<"El resultado es: "<<D;
	}
	
	cout<<endl<<endl<<"DESEA CAPTURAR 2 NUMEROS MAS(S=1/N=2): ";
	cin>>R;
		
	}while (R<=1);
	
	cout<<endl<<endl<<"ADIOS :D";		

	
}
