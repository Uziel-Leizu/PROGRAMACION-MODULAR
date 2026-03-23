using namespace std;
#include<stdio.h>
#include<math.h>
#include<iostream>
#include<conio.h>

void captura (void);
void suma (void);
void mayor (void);
void potencia (void);



int A=0,B=0,C=0,D,R;
char r [30];
main (void){
	cout<<"****BIRNVENIDO****"<<endl<<endl;
	char r='s';
	while (r=='s'){
		captura ();
		suma ();
		mayor ();
		potencia ();
		cout<<endl<<endl<<"otra operacion: ";
		cin>>r;
	}
}
void captura (void){
	
	cout<<"Por favor ingrese 2 digitos: ";
	cin>>A>>B;
	
	}

void suma (void){
	cout<<"**SUMA**"<<endl<<endl;
	C=A+B;
	cout<<"RESULTADO DE LA SUMA: "<<C<<endl;
}
void mayor (void){
	cout<<endl<<endl<<"**EL MAYOR**"<<endl<<endl;
	
	if(A>B){
	cout<<endl<<endl<<"El mayor es: "<<A<<endl<<endl;
	
	}
	else{
		cout<<endl<<endl<<"El mayor es: "<<B<<endl<<endl;
	}
}
void potencia (void){
	cout<<endl<<endl<<"**POTENCIA DEL MAS PEQUEÑO**";
	if (A<B){
		D= pow(A,3);
			cout<<endl<<endl<<"El resultado es: "<<D;
	}
	else{
	 D= pow(B,3);
	 	cout<<endl<<endl<<"El resultado es: "<<D;
	}
}

