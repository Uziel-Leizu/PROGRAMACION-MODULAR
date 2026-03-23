#include<stdlib.h>
#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

vector<int>A(10,0);
vector<int>B;
vector<int>aux(10); 
vector<int>Bnew;

void numeros (void);
void captura(void);
void mostrarv1 (void);
void sinrepetir (void);
void mostrarv2 (void);

 int vec;
 int i=0;
 int j=0;
 int z=0;
 int num;
 int p=0;
 int k=0;
 int cont;

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
	B=A;
	aux.resize(vec);
	for (i=0;i<B.size();i++){
			for(j=(i+1);j<B.size();j++){
			if(B[i]==B[j]){
				B.erase(B.begin()+j);
				sinrepetir();
			}
		}
	}
}
		
	
void mostrarv2 (void){
	
		cout<<"Numeros del vector sin repeticion: "<<endl;
        for (i=0;i<B.size();i++){
                cout<<B[i]<<endl;
	}
	cout<<endl;
}



