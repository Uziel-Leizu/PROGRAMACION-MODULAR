#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <vector>
#include <stdio.h>

using namespace std;

void datos (void);

int main (void){

    cout<<"NUMEROS ALEATORIOS"<<endl<<endl;
    datos();

}


void datos (void){
    int numeros [6][6];
    srand(time(NULL));
    for(int f=0;f<6;f++){
        for(int c=0;c<6;c++){
            numeros[f][c]=rand()%100;
        }
    }
    for(int f=0;f<6;f++){
            cout<<endl;
        for(int c=0;c<6;c++){
            cout<<numeros [f][c]<<"\t";
        }
    }

}
