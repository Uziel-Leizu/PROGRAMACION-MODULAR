#include <iostream>
#include <string.h>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

struct prof{
int num;
string nom;
string dep;
string grado;
string nacion;
float salario;
};

int i;


vector <prof> captura (void);
void buscaprofesor (vector<prof>&P);
void montototal (vector<prof>&P);
void extranjero(vector <prof>&ext);
void profmx (vector <prof>&mx);



 main (void){
    system("color F9");
 	vector <dato> prof(255);
	prof=captura();
	buscaprofesor(prof);
}

vector <prof> captura(void){
	i=0;
	int d=0;
	char res;
	res='s';
	vector<dato>P(255);
	do{
	cout<<"INGRESE NUMERO DE EMPLEADO "<<endl;
    cin>>P[i].num;
	cout<<"NOMBRE: " <<endl;
	getline(cin,P[i].nom);
	fflush(stdin);

	cout<<"DEPARTAMENTO: "<<endl;

        cout << "-----------" << endl << endl;
        cout << "\t1 .- -Computacion" << endl;
        cout << "\t2 .- Sistemas Digitales" << endl;
        cout << "\t3 .- Control Electrico" << endl;
        cout << "\t4 .- MAC" << endl;
        cout << "\t5 .- Automotriz" << endl;
        cout << "\t6 .- Aeronautica" << endl << endl;
        cout << "Elije una opcion: ";

                cin >> d;
                switch(d){

            case 1:
                 P[i].
            case 2:

            case 3:

            case 4:

            case 5:

            case 6:

}







    cout<<"GRADO ACADEMICO: "<<endl;
    getline(cin,P[i].dep);
    fflush(stdin);

    cout<<"NACIONALIDAD: "<<endl;
    getline(cin,P[i].dep);
    fflush(stdin);

    cout<<"SALARIO: "<<endl;
    getline(cin,P[i].dep);
    fflush(stdin);


    getline(cin,AL[i].escuela);
    fflush(stdin);

    cout<<"DATOS CAPTURADOS,pulse * para terminar,de no desear detener la captura pulse cualquier letra"<<endl;
    cin>>res;
    cin.ignore(256,'\n');
    i++;
	}while(res != '*');
	AL.resize(i);
	return P;


}



void buscraprofesor(vector<dato>&P){
	AL.resize(255);
	int a;


}
