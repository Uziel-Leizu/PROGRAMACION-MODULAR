using namespace std;
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <iostream>
#include<stdlib.h>
#include<vector>

vector <int> A (7);
vector <int> x (7);
void numeros (void);
void captura (void);
void posicion (void);
void imprimir (void);
void buscar (void);
void salir (void);
char R2;
int i;
int main (){
	system("color 09");
	char R='s';
    while (R=='s' or R=='S'){
		int b=0;
		int S=5;
        cout<<"****BIENVENIDO****"<<endl<<endl;
        while(S>4){
        captura();
		cout<<"Por favor elija una de las siguientes opciones: "<<endl<<endl;
        cout<<"1.Posicion"<<endl;
        cout<<"2.Imprimir vector completo"<<endl;
        cout<<"3.Buscar"<<endl;
        cout<<"4.salir"<<endl;
        cin>>S;
        cout<<endl<<endl;
        if(S>3){
        	cout<<"Numero no valido, por favor escriba otro"<<endl<<endl;
		}
    	}
        switch(S){
        	case 1: {
        		
        		posicion();
        		
				break;
			}
			case 2: {
				
				imprimir();
				
				break;
			}
			case 3: {
				
				buscar();
				
				break;
			}
			case 4: {
				
				salir ();
				if(R2=='S' or R2=='s'){
					return 0;
				}
				
				break;
			}
			
		}	
        	
        cout<<"desea usar nuevamente el programa?(s/n): ";
        cin>>R;
        cout<<endl<<endl;
    	}
    	return 0;
    }
     
void posicion (void){
	cout<<"Elige la posicion de tu numero dentro del vector: "<<endl;
	cin>>i;
	cout<<"Tu numero es: "<<A[i]<<endl<<endl;
}
void imprimir (void){
	for(i=0;i<=6;i++){
		cout<<A[i]<<endl<<endl;
	}
}
void buscar (){
	int bus=0;
	int d=0;
	while(bus==0){
		bus=0;
		cout <<"que numero desea Buscar?"<<endl;
		cin>>d;

		for(int i=0;i<=6;i++){
 			if(A[i]==d){
 				bus++;
		}	
	}
	if (bus==0){
		cout<<"Tu dato no existe ingresa otro por favor"<<endl<<endl;
	}
	}
	cout<<"Tu numero esta en la casilla: "<<bus;
	
	
}

void salir (void){
	cout<<"Seguro que desea salir?(S/N)"<<endl;
	cin>>R2;
}
void captura (void){
	for (i=0;i<=6;i++){
		cout<<"ingrese valor "<<i<<endl;
		cin>>A[i];
	}
}


