using namespace std;
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <iostream>
#include<stdlib.h>
#include<vector>

void captura (void);
void inserta (void);
void borra (void);
void salir (void);
void resultado (void);
int bus;
int i;
vector <int> A(5,0);
char R2;
char R;
int c;
int b;
int d;

int main (){
	system("color 09");
	char R='s';
    while (R=='s' or R=='S'){
		int b=0;
		int S=4;
        cout<<"****BIENVENIDO****"<<endl<<endl;
        cout<<"Por favor ingrese 5 digitos cualquiera:"<<endl;
        captura();
        while(S>3){
		cout<<"Por favor elija una de las siguientes opciones: "<<endl<<endl;
        cout<<"1.Insertar"<<endl;
        cout<<"2.Borrar"<<endl;
        cout<<"3.Salir"<<endl;
        cin>>S;
        if(S>3){
        	cout<<"Numero no valido, por favor escriba otro"<<endl<<endl;
		}
    	}
        switch(S){
        	case 1: {
        		
        		inserta();
        		
				break;
			}
			case 2: {
				
				borra();
				
				break;
			}
			case 3: {
				
				salir ();
				if(R2=='S' or R2=='s'){
					return 0;
				}
				
				break;
			}
			
		}	
        	
		cout<<"NUMEROS INGRESADOS:"<<endl;
        resultado();
        cout<<"desea usar nuevamente el programa?(s/n): ";
        cin>>R;
        cout<<endl<<endl;
    	}
    	return 0;
    }
	 
void captura (void){
	for (i=0;i<5;i++){
		cout<<"ingrese valor "<<i<<endl;
		cin>>A[i];
	}
}
void inserta (void){
	cout <<"que numero desea insertar"<<endl;
	cin>>b;
	c=5;
	while(c>4){
	cout <<"despues de que posicion"<<endl;
	cin>>c;
	if(c>4){
		cout<<"pocicion no valida, escriba una entre 0 y 4"<<endl<<endl;
	}
	}
	A.insert (A.begin()+c,b);
	cout<<"valor insertado"<<endl<<endl;
}
void borra (void){
	bus=0;
	while(bus==0){
		bus=0;
		cout <<"que numero desea eliminar?"<<endl;
		cin>>d;

		for(int i=0;i<5;i++){
 			if(A[i]==d){
 				bus++;
 				A.erase(A.begin()+i);
		}	
	}
	if (bus==0){
		cout<<"Tu dato no existe ingresa otro por favor"<<endl<<endl;
	}
	}
}
void salir (void){
	cout<<"Seguro que desea salir?(S/N)"<<endl;
	cin>>R2;
}
void resultado (void){
	for(int i=0;i<A.size();i++){
		cout<<"Posicion "<<i<<endl;
 		cout<<A[i]<<endl;
 	}
 	cout<<endl;
}
