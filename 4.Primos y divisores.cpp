using namespace std;
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <iostream>
#include<stdlib.h>

	void captura (void);
	void imprimir (void);
	void primos (void);
	void divisores (void);
	void esPrimo (int);
	void divisoresDe (int );

	int Vi=0,Vf=0,Inc=0,A,B,C,D,E,i;
	char R [35];
	int main (void){
	    system ("color  F9");
		char R='s';
		cout<<"Bienvenido"<<endl<<endl;
		while (R=='s' or R=='S'){

			captura ();
			imprimir();
			primos();
			divisores();
			cout<<endl;
			cout<<"Quieres ingresar otros valores? (S/N): ";
			cin>>R;
			cout<<endl;
		}
	}

	void captura (void){
		cout<<"Por favor ingrese el valor inicial: ";
		cin>>Vi;
		cout<<"Por favor ingrese el valor final: ";
		cin>>Vf;
		cout<<"Por favor ingrese el incremento: ";
		cin>>Inc;
		cout<<endl;
	}

	void imprimir (void){
		cout<<"la serie de numeros que ingresaste es: "<<endl;
		for(i=Vi;i<=Vf;i+=Inc){
			cout<<i<<", ";
		}
		cout<<endl<<endl;
	}
	void primos (void){
		cout<<"Los numeros primos son: "<<endl;
		for(i=Vi;i<=Vf;i+=Inc){
			esPrimo(i);
		}
		cout<<endl;
	}
	void esPrimo (int p){
	C=0;
	for(B=1;B<=p;B++){
        if(p%B==0){
            C++;
        }
	}
    if(C==2){
        cout<<p<<endl;
	}
	}
	void divisores(void){

		for(i=Vi;i<=Vf;i+=Inc){
			divisoresDe(i);
		}
		cout<<endl;
	}
	void divisoresDe (int p){
	C=0;
	for(B=1;B<=p;B++){
        if(p%B==0){
            C++;
        }
	}
    if(C!=2){
	cout<<"los divisores de "<<p<<" son:";
	for(B=1;B<=p;B++){
        if(p%B==0){
           cout<<B<<",";
        }
	}
	cout<<endl;
	}
}
