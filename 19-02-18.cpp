#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int A=0,B=0,C=0;
char R [10];
void captura (void);
void primo (void);

int main (){
    char R='s';

    cout<<"***BIENVENIDO***"<<endl<<endl;
    while (R=='s' or R=='S'){
    		C=0;
			A=0;
            captura ();
            primo ();

            cout<<"DESEA USAR OTRA VEZ EL PROGRAMA? (S/N): ";
            cin>>R;

    }

}
void captura(void){
	
	while (A<=0){
		   cout<<"Por favor ingrese un numero entero: ";
    cin>>A;

    if(A<=0){
    cout<<"no es valido, por favor ingresa otro: "<<endl<<endl;
	}
 
}
}
void primo (void){
	
	for(B=1;B<(A+1);B++){
         if(A%B==0){
             C++;
            }
         }
         if(C!=2){
              cout<<A<<" No es Primo"<<endl<<endl;
            }else{
                cout<<A<<" Si es Primo"<<endl<<endl;
         }
}
	
	


