#include <stdlib.h>
#include <vector>
#include <iostream>
#include <time.h>
#include <stdio.h>

using namespace std;

void datos (void);
void mostrar (int numeros [25][25]);
void contador (int numeros [25][25]);

int main (void){

	cout<<"****BIENVENIDO****"<<endl<<endl<<"A continuacion se mostraran numeros aleatorios y veremos cuantas veces se repite el 1 en cada fila"<<endl<<endl;
	datos();

}


void datos (void){
	int num [25][25];
    srand(time(NULL));
    for(int f=0;f<25;f++){
        for(int c=0;c<25;c++){
            num[f][c]=rand()%100;
        }
    }
    mostrar(num);
    contador(num);
}

void mostrar (int numeros [25][25]){
	    for(int f=0;f<25;f++){
            cout<<endl<<"FILA "<<f<<endl<<endl;
        for(int c=0;c<25;c++){
            cout<<numeros [f][c]<<"\t";
        }
    }
}

void contador (int numeros [25][25]){
	int contador=0;
	cout<<endl<<endl;

	vector <int> fila (255,0);
		for(int f=0;f<25;f++){
        for(int c=0;c<25;c++){
        	if(numeros [f][c] ==1){
        		fila[f]++;
			}
        }
    }
    for(int h=0;h<25;h++){
    	cout<<"En la fila "<<h<<" hay "<<fila[h]<<" numeros 1"<<endl<<endl;
	}
}




