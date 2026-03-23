#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <vector>
#include <stdio.h>

using namespace std;

void datos (void);
void muestra (int numeros [8][8]);
void suma (int numeros [8][8]);
int main (void){

    cout<<"NUMEROS ALEATORIOS"<<endl<<endl;
    datos();

}

void datos (void){
    int num [8][8];
    srand(time(NULL));
    for(int f=0;f<8;f++){
        for(int c=0;c<8;c++){
            num[f][c]=rand()%100;
        }

    }
    muestra(num);
    suma(num);
}
void muestra (int numeros [8][8]){
    for(int f=0;f<8;f++){
            cout<<endl;
        for(int c=0;c<8;c++){
            cout<<numeros [f][c]<<"\t";
        }
    }
}
void suma (int numeros [8][8]){
    int sum=0;
    cout<<endl<<"numeros de la diagonal"<<endl<<endl;
    for(int f=0,c=0;f<8,c<8;f++,c++){

            cout<<numeros [f][c]<<"  ";
            sum=sum+numeros[f][c];
        }
        cout<<endl<<endl<<"LA SUMA DE LOS NUMEROS ES: "<<sum;
    }


