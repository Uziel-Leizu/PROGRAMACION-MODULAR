#include<stdlib.h>
#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

vector<int> A(100,0);
vector<int> B(100,0);
vector<int> aux(100); 
vector<int> Bnew;

void numeros (void);
void captura(void);
void mostrarv1 (void);
void sinrepetir (void);
void mostrarv2 (void);
 int cont;
 int vec;
 int i=0;
 int j=0;
 int z=0;
 int num;
 int p=0;
 int k=0;

main(void){
    char R;
	R='s';
    while(R=='s' or R=='S'){
    	cout<<"****BIENVENIDO****"<<endl<<endl;
    	numeros();
		captura();
		mostrarv1();
		B=A;
		sinrepetir();
		mostrarv2();
		cout<<"Desea usar nuevamente el programa?(s/n)"<<endl;
		cin>>R;
		}
}


void numeros(void){

cout<<"Ingrese los numeros que quiere almacenar"<<endl;
    cin>>vec;
    A.resize(vec);
}

void captura(void){
    int i;
for(i=0;i<A.size();i++){
	cout<<"Ingrese "<<vec<<" numeros enteros entre el 0 y 100 (pueden ser repetidos)"<<endl;
    cin>>A[i];
}
}
void mostrarv1 (void){
	int q;
	cout<<"Numeros del vector 1:"<<endl<<endl;
	for (q=0;q<A.size();q++){
		cout<<A[q]<<endl;
	}
}

void sinrepetir (void){
	for (i=0;i<vec;i++) {
                cont=0;
                num=B[i];
                aux[j]=num;
                j++;
                for (k=0;k<vec;k++)
                        if ( aux[k] == num )
                                cont++;

                if ( cont == 1 ) {
                        Bnew[z]=num;
                        z++;
                }
        }
	
}
void mostrarv2 (void){
	
		cout<<"Numeros del vector sin repeticion: "<<endl;
        for (i=0;i<z;i++){
                cout<<Bnew[i]<<endl;
	}
	cout<<endl;
}
