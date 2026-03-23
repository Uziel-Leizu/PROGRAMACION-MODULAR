#include <iostream>
#include <string.h>
#include <vector>
#include <stdio.h>
using namespace std;

struct dato {
 string nombre;
 int edad;
 string escuela;
}alumno;

void despliega( dato alumno1);

main (void){

vector<dato> A(50);
cout<<"Tu nombres es: "<< endl;
getline(cin,alumno.nombre);
cout<<"Edad: " <<endl;
cin >>alumno.edad;
cout<<"Escuela: "<<endl;
fflush(stdin);
getline(cin,alumno.escuela);
despliega(alumno);
}

void despliega( dato alumno1){
cout<<"Te llamas: "<<alumno1.nombre<<endl;
cout<<"Tienes: "<<alumno1.edad<<endl;
cout<<"Egresaste de: "<<alumno1.escuela<<endl;
}
