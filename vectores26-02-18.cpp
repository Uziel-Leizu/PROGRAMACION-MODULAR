using namespace std;
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <iostream>
#include<stdlib.h>
#include<vector>

void captura (void);
void accion (void);

vector <float> A(10);
int i=0;
char R [35];
int main(){
    system("color F9");
    char R='s';
    while (R=='s' or R=='S'){
        cout<<"HOLIS"<<endl<<endl;
        captura();
        accion ();
        cout<<"desea usar nuevamente el programa?(s/n): ";
        cin>>R;
        cout<<endl<<endl;
    }
}
void captura(){
    for(int i=0;i<10;i++){
    cout<<"ESCRIBA EL VALOR "<<i+1<<endl;
    cin>>A[i];
    }
}
void accion (){
    system("cls");
    for(i=9;i>=0;i--){
        cout<<"valor "<<i+1<<" escrito: "<<A[i]<<endl;
    }
}
