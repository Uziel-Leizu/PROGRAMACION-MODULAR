#include <iostream>
#include <string.h>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

struct dato {
string nombre;
int edad;
string escuela;
};

int i;


vector <dato> captura(void);
void despliega(vector<dato>&AL);



 main (void){
    system("color F9");
 	vector <dato> ALU(255);
	ALU=captura();
	despliega(ALU);
}

vector <dato> captura(void){
	i=0;
	char res;
	res='s';
	vector<dato>AL(255);
	do{
	cout<<"Tu nombres es: "<<endl;
	fflush(stdin);
	getline(cin,AL[i].nombre);
	cout<<"Edad: " <<endl;
	cin>>AL[i].edad;
	cout<<"Escuela: "<<endl;
    fflush(stdin);
    getline(cin,AL[i].escuela);
    cout<<"DATOS CAPTURADOS,pulse * para terminar,de no desear detener la captura pulse cualquier letra"<<endl;
    cin>>res;
    cin.ignore(256,'\n');
    i++;
	}while(res != '*');
	AL.resize(i);
	return AL;


}



void despliega(vector<dato>&AL){
	AL.resize(255);
	int a;
for(a=0;a<i;a++){
	system("cls");
cout<<"Te llamas: "<<AL[a].nombre<<endl;
cout<<"Tienes: "<<AL[a].edad<<endl;
cout<<"Egresaste de: "<<AL[a].escuela<<endl;
cout<<"Pulsa una tecla para continuar...";
   getch();
}
}







