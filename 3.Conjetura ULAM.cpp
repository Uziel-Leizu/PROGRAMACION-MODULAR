using namespace std;
#include<stdio.h>
#include<math.h>
#include<iostream>
#include<conio.h>

void captura (void);
void ulam (void);


int A=0,B=0,C=0,D,R;
char r [30];
main (void){
	cout<<"****BIRNVENIDO****"<<endl<<endl;
	char r='s';
		while(r=='s'){

		captura ();
		ulam ();
	}
}
void captura (void){
	do{
	cout<<"Por favor ingrese 1 numero: ";
	cin>>A;
	
	if (A<0){
		cout<<"no es valido, por favor ingresa otro: "<<endl;
	}
		
	} while (A<0);
	}

void ulam (void){
	do{
		if(A%2==0){
		A=A/2;
		cout<<A<<endl;
		}
		else{
		A=(A*3)+1;
		cout<<A<<endl;
	}
	}while(A!=1);

}

