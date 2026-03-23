#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <vector>
#include <string>
#include <time.h>

using namespace std;

vector <string> captura (void);
vector <int> buscames (float dep [3][12]);
vector <float> califica (vector <string>&alumno);
vector <float> promedio (float cal [5][3]);

int main (void){
	char R='s';
	while (R=='s' or R=='S'){
	system("cls");
	vector <float> c (3);
	cout<<"DEPARTAMENTO DE DULCES, BEBIDAS Y CONSERVAS"<<endl<<endl;

    captura();

   // for (int f=0;f<5;f++){
  //  	cout<<"Alumno: "<<b[f]<<"\tPromedio: "<<c[f]<<endl<<endl;
//	}
	cout<<endl<<endl<<"Desea volver a utilizar el programa?(S/N)"<<endl;
	cin>>R;

	}
}


vector <string> captura (void){
    float dep [3][12];
   // cout<<"MESES"<<endl<<endl;
    for(int f=0;f<3;f++){
        for (int c=0;c<12;c++){
        	dep[f][c]=rand()%100;
		}
    }
    buscames(dep);
}

vector <int> buscames (float dep [3][12]){
	int f,c;
	vector <int> mesmay (3,0);
	vector <int> mesmen (3,0);
	vector <int> x(3);
	for(f=0;f<5-1;f++){
		int max=0;
		int men=100;
		for(c=0;c<5-1;c++){
			cout<<dep [c][f]<<"\t";
		if (dep[f][c]>max){
   		max = dep[f][c];
   		mesmay[f] = c;	

			}
			if(dep[f][c]<men){
			men = dep [f][c];
			mesmen[f]=c;
		}
		
		}
	}
	
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



