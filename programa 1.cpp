#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string>
#include <ctype.h>
#include <vector>

using namespace std;

void datos (void);
void mostrar (int T1 [255][255],int T2 [255][255],int w);
void produc (int T1[255][255],int T2[255][255],int w);

int main (void){

	cout<<"****BIENVENIDO****"<<endl<<endl<<"A continuacion se mostraran el producto "<<endl<<endl;
	datos();

}


void datos (void){
    int w=0,n=0;
    int x=0;

    cout<<"ingrese el numero de columnas y filas que quiere almacenar"<<endl;
    cin>>w;

    cout<<endl<<endl;

	int T1 [255][255];
	int T2 [255][255];
    srand(time(NULL));
    for(int f=0;f<w;f++){
        for(int c=0;c<w;c++){
            T1[f][c]=rand()%100;
            T2[f][c]=rand()%100;
        }
    }
    mostrar(T1,T2,w);
    produc(T1,T2,w);
}

void mostrar (int T1 [255][255],int T2[255][255],int w){
    cout<<endl<<endl<<endl<<endl<<"MATRIZ 1"<<endl<<endl;
	    for(int f=0;f<w;f++){
                cout<<endl;
        for(int c=0;c<w;c++){
            cout<<T1 [f][c]<<"\t";
        }
    }
    cout<<endl<<endl<<endl<<endl<<"MATRIZ 2"<<endl<<endl;
    for(int f=0;f<w;f++){
            cout<<endl;
        for(int c=0;c<w;c++){
            cout<<T2 [f][c]<<"\t";
        }
}
}
void produc (int T1[255][255],int T2[255][255],int w){
    int x1,x2,y1,y2;
    int p;
    cout<<endl<<endl<<"Ingrese las coordenadas de la matriz 1 que desee usar"<<endl;
    cin>>x1;
    cin>>y1;
    cout<<endl<<endl<<"Ingrese las coordenadas de la matriz 2 que desee usar"<<endl;
    cin>>x2;
    cin>>y2;

    p=T1[x1][y1]*T2[x2][y2];

    cout<<"El producto de "<<T1[x1][y1]<<" por "<<T2[x2][y2]<< " es "<<p;
}






