using namespace std;
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <iostream>
#include<stdlib.h>
#include<vector>

void captura1 (void);
void captura2 (void);
void suma (void);

vector <float> A(7);
vector <float> B(7);

int i=0;
char R [35];
int main(){
    system("color F9");
    char R='s';
    while (R=='s' or R=='S'){
        cout<<"****BIENVENIDO****"<<endl<<endl;
        captura1();
        captura2();
        suma ();
        cout<<"desea usar nuevamente el programa?(s/n): ";
        getch()>>R;
        cout<<endl<<endl;
    }
}
void captura1(){
    for(int a=0;a<7;a++){
    cout<<"ESCRIBA EL VALOR "<<a+1<<endl;
    cin>>A[a];
    }
}
void captura2(){
    for(int b=0;b<7;b++){
    cout<<"ESCRIBA EL VALOR "<<b+1<<endl;
    cin>>B[b];
    }
}
void suma (void){
    for (i=0;i<7;i++)
    {
    s[i]=np[i]+ns[i];
    }
}
void mayor (void){
    for (i=0;i<7;i++)
        {
        if (s[i]>ma)
        {
            ma=s[i];
        }
    }
    cout<<"Suma mayor:"<<ma;
}
