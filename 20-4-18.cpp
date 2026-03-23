#include <stdlib.h>
#include <vector>
#include <iostream>
#include <time.h>
#include <stdio.h>

using namespace std;

void datos (void);
void mostrar (int numeros [255][255],int w);
void contador (int numeros [255][255],int w,int x);

int main (void){

	cout<<"****BIENVENIDO****"<<endl<<endl<<"A continuacion se mostraran numeros aleatorios y veremos cuantas veces se repite el deseado en cada fila"<<endl<<endl;
	datos();

}


void datos (void){
    int w=0,n=0;
    int x=0;

    cout<<"ingrese el numero de columnas y filas que quiere almacenar"<<endl;
    cin>>w;

    cout<<endl<<endl;

	int num [255][255];
    srand(time(NULL));
    for(int f=0;f<w;f++){
        for(int c=0;c<w;c++){
            num[f][c]=rand()%100;
        }
    }
    mostrar(num,w);
    cout<<endl<<"ingrese que numero quiere buscar"<<endl;
    cin>>x;
    contador(num,w,x);
}

void mostrar (int numeros [255][255],int w){
	    for(int f=0;f<w;f++){
            cout<<endl<<"FILA "<<f<<endl<<endl;
        for(int c=0;c<w;c++){
            cout<<numeros [f][c]<<"\t";
        }
    }
}

void contador (int numeros [255][255],int w,int x){
	int contador=0;
	cout<<endl<<endl;

	vector <int> fila (255,0);
		for(int f=0;f<w;f++){
        for(int c=0;c<w;c++){
        	if(numeros [f][c] ==x){
        		fila[f]++;
			}
        }
    }
    for(int h=0;h<w;h++){
    	cout<<"En la fila "<<h<<" hay "<<fila[h]<<" numeros "<<x<<endl<<endl;
	}
}
