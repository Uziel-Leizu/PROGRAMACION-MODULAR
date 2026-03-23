using namespace std;
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <iostream>
#include<stdlib.h>
#include<vector>

void captura1(void);
void captura2(void);
void suma(void);
void mayor(void);
vector <float> np(7,0);
vector <float> ns(7,0);
vector <float> s (7,0);
vector <float> m (7,0);
int i=0,ma=0;

char R [35];
int main(){
    system("color F9");
    char R='s';
    while (R=='s' or R=='S'){
		int b=0,a=0;
		
        cout<<"****BIENVENIDO****"<<endl<<endl;
        captura1();
        captura2();
        suma ();
        mayor ();
        cout<<"desea usar nuevamente el programa?(s/n): ";
        cin>>R;
        cout<<endl<<endl;
    }
}
void captura1(void){
    cout<<"Ingrese 7 numeros"<<endl;
    for (i=0;i<7;i++)
    {
        cin>>np[i];
    }
}
void captura2(void){
    cout<<"Ingrese otros 7 numeros"<<endl;
    for (i=0;i<7;i++)
    {
        cin>>ns[i];
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
    cout<<"Suma mayor:"<<ma<<endl<<endl;
}
