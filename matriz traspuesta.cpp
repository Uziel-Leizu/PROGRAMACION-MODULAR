#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <vector>
#include <stdio.h>

using namespace std;

void datos (void);
void muestra (int numeros [10][10]);
void suma (int numeros [10][10]);
int main (void){

    cout<<"NUMEROS ALEATORIOS"<<endl<<endl;
    datos();

}

void datos (void){
    int num [10][10];
    srand(time(NULL));
    for(int f=0;f<10;f++){
        for(int c=0;c<10;c++){
            num[f][c]=rand()%100;
        }

    }
    muestra(num);
    suma(num);
}
void muestra (int numeros [10][10]){
    for(int f=0;f<10;f++){
            cout<<endl;
        for(int c=0;c<10;c++){
            cout<<numeros [f][c]<<"\t";
        }
    }
}
void suma (int numeros [10][10]){
	cout<<endl<<endl<<"MATRIZ TRASPUESTA"<<endl<<endl;
		for(int f=0;f<10;f++){
            cout<<endl;
        for(int c=0;c<10;c++){
            cout<<numeros [c][f]<<"\t";
        }
    }
}
