#include <stdlib.h>
#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>

using namespace std;

void captura (void);
void imprimir (void);
void resultado (void);

vector <int> V(255);

char R='s';
int i=0;
int c=0;
int contador=0;
int anaya=0;
int meade=0;
int quien=0;
float pa=0.00;
float pm=0.00;
float pq=0.00;
int votos=0;

int main (){
	while (R=='s' or R=='S'){
		i=0;
		pa=0;
		pm=0;
		pq=0;
		anaya=0;
		meade=0;
		quien=0;
		votos=0;
		contador=0;
		cout<<"****BIENVENIDO****"<<endl<<endl;
		cout<<"elecciones 2018"<<endl<<endl<<"candidatos"<<endl<<endl;
		cout<<"1.Anaya"<<endl;
		cout<<"2.Meade"<<endl;
		cout<<"3.Ya sabes quien"<<endl<<endl;
		captura();
		imprimir();
		resultado();
		cout<<"Desea volver a utilizar el programa?(S/N)"<<endl;
		cin>>R;
		
	}
	
}
void captura (void){
	do{
		cout<<"Por favor introdusca el numero del candidato por el que va a votar:"<<endl;
		cin>>V[i];
		c=V[i];
		if (V[i]<=3){
			i++;
			contador++;
		}
		if(V[i]>3){
				cout<<"Numero no valido por favor ingrese otro"<<endl<<endl;
			}
		
		
	}while(c>=1);
}
void imprimir (void){
	i=0;
	
	for(i=0;i<contador-1;i++){
		if(V[i]==1) {
			anaya++;
			votos++;
		}
			if(V[i]==2){
				meade++;
				votos++;
			} 
				if(V[i]==3){
					quien++;
					votos++;
				}
				
			
		
		
	}
	cout<<"votos de anaya: "<<anaya<<endl;
	cout<<"votos de meade: "<<meade<<endl;
	cout<<"votos de ya sabes quien: "<<quien<<endl<<endl;
	
}
void resultado (void){
	
	pa = anaya * 100 / votos;
	pm = meade * 100 / votos;
	pq = quien * 100 / votos;
	
	cout<<"Total de votos: "<<votos<<endl<<endl;
	
	if(anaya > meade and anaya > quien) cout<<"Ganador anaya con: "<<anaya<<" votos"<<endl;
	if(meade > anaya and meade > quien) cout<<"Ganador meade con: "<<meade<<" votos"<<endl;
	if(quien > anaya and quien > meade) cout<<"Ganador ya sabes quien con: "<<quien<<" votos"<<endl<<endl;
	
	cout<<"porcentajes:"<<endl<<endl;
	

	
	cout<<"anaya: "<<pa<<"%"<<endl;
	cout<<"meade: "<<pm<<"%"<<endl;
	cout<<"quien: "<<pq<<"%"<<endl<<endl;
	 
	
	
	
	
	
}

