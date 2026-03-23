#include <stdio.h>
#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

struct persona {
    char nombre [80];
    int edad;
};

void captura (void);
void imprime (void);
persona p;
int main (){

    system("color F9");
    /*persona p;
    ofstream salida;
    ifstream entrada;
    salida.open("E:/angenda.dat",ios::binary);
    char res='s';
    while(res == 's'){
    cout<<"ingrese nombre"<<endl<<endl;
    cin.getline(p.nombre,30);
    fflush(stdin);
    cout<<endl;
    cout<<"ingrese edad"<<endl<<endl;
    cin>>p.edad;
    salida.write((char*)&p,sizeof(persona));
    cout<<"desea realizar otra captura(s/n)";
    cin>>res;
    fflush(stdin);
    }
    salida.close();*/

    /*entrada.open("E:/angenda.dat",ios::binary);
    while(entrada.read((char*)&p,sizeof(persona))){
        cout<<p.nombre<<endl;
        cout<<p.edad<<endl;
    }
    entrada.close();*/
    cout<<"BIENVENIDO AL PROGRAMA ALMACENADOR DE DATOS"<<endl<<endl;
    captura();
    imprime();

}

void captura (void){
    persona p;
    ofstream salida;
    ifstream entrada;
    salida.seekp(0,ios::end);
    salida.open("E:/angenda.dat",ios::app | ios::binary);
    char res='s';
    while(res == 's'){
    cout<<"ingrese nombre"<<endl<<endl;
    cin.getline(p.nombre,30);
    fflush(stdin);
    cout<<endl;
    cout<<"ingrese edad"<<endl<<endl;
    cin>>p.edad;
    salida.write((char*)&p,sizeof(persona));
    cout<<"desea realizar otra captura(s/n)";
    cin>>res;
    fflush(stdin);
    }
    salida.close();
}
void imprime (void){
    ofstream salida;
    ifstream entrada;
    cout<<endl;
   entrada.open("E:/angenda.dat",ios::binary);
    while(entrada.read((char*)&p,sizeof(persona))){
        cout<<p.nombre<<endl;
        cout<<p.edad<<endl;
    }
    entrada.close();
}


