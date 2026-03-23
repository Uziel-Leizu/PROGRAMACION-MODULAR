#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <vector>
#include <string>

using namespace std;

vector <string> captura (void);
vector <string> burbuja (vector <string>&nombre);
vector <float> califica (vector <string>&alumno);
vector <float> promedio (float cal [5][3]);

int main (void){
	char R='s';
	while (R=='s' or R=='S'){
	system("cls");
	vector <string> a,b (5);
	vector <float> c (5);
	cout<<"EXAMEN PRACTICO DE PROGRAMACION MODULAR"<<endl<<endl;
	
    a=captura();
    b=burbuja(a);
    c=califica(b);
    
    for (int f=0;f<5;f++){
    	cout<<"Alumno: "<<b[f]<<"\tPromedio: "<<c[f]<<endl<<endl;
	}
	cout<<endl<<endl<<"Desea volver a utilizar el programa?(S/N)"<<endl;
	cin>>R;
		
	}
}


vector <string> captura (void){
    vector <string> nombre (5);
    cout<<"Por favor ingrese los nombres de alumnos con apellidos"<<endl<<endl;
    for(int i=0;i<5;i++){
        getline(cin,nombre[i],'\n');
    }
    return nombre;
}

vector <string> burbuja (vector <string>&nombre){
	int j,i;
	string aux;
	for(j=0;j<5-1;j++){
		for(i=0;i<5-1;i++){
			if(nombre[i]>nombre[i+1]){
				aux=nombre[i];
				nombre[i]=nombre[i+1];
				nombre[i+1]=aux;
			}
		}	
	} return nombre;
}

vector <float> califica (vector <string>&alumno){
	vector <float> prom (5);
	float cal [5][3];
	for(int f=0;f<5;f++){
		cout<<endl<<"Alumno: "<<alumno[f]<<endl;
		for(int c=0;c<3;c++){
			cout<<"Calificacion: "<<c+1<<endl;
			cin>>cal[f][c];
		}
	}
	prom=promedio(cal);
	return prom;
	
}

vector <float> promedio (float cal [5][3]){
	vector <float> prom (5);
	for(int f=0;f<5;f++){
		prom[f]=(cal[f][0]+cal[f][1]+cal[f][2])/3;
	}
	return prom;
}



