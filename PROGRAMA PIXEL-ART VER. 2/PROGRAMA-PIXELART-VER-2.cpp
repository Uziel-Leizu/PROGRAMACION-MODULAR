#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <windows.h>
#include <time.h>

using namespace std;

//funcion gotoXY
COORD coord={0,0};

void gotoxy(int x,int y){
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void delay (unsigned int mseconds){
	clock_t goal =mseconds + clock();
	while(goal>clock());
}
//struct

struct tamanio {
	char p [255][255];
	int x;
	int y;
};
char nombre[50];

//funciones del programa
void menu (void);
void visualizar (void);
void editar (void);
void crear (void);

tamanio pix;

int main (void){
	char res='s';

    system("color F9");
    while(res == 's'){
    system("cls");
    gotoxy(10,1);cout<<"BIENVENIDO AL PROGRAMA PARA CREAR PIXELARTS VER. 2"<<endl<<endl;
    menu();
    cout<<endl<<endl<<"DESEA REALIZAR OTRA ACCION? (S/N)";
    cin>>res;
	}
}

void menu (void){
	int l;
	cout<<"que accion desea realizar"<<endl<<endl;
	gotoxy(2,5);cout<<"1) CREAR PIXELART"<<endl;
	gotoxy(2,6);cout<<"2) VISUALIZAR TODOS"<<endl;
	gotoxy(2,7);cout<<"3) EDITAR"<<endl;
	gotoxy(2,8);cout<<"4) Salir"<<endl<<endl;
	cout<<"Respuesta: ";
	cin>>l;
	fflush(stdin);

	switch (l) {
		case 1:{
			system("cls");
			crear();
			break;
		}
		case 2: {
			system("cls");
			visualizar();
			break;
		}
		case 3:{
			system("cls");
			editar();
			break;
		}
		case 4:{
			system("cls");
			cout<<"ADIOS"<<endl<<endl;
			exit(0);
			break;
		}
	}
}

void crear (void){
	int Y,X;
	cout<<"INGRESE EL NOMBRE QUE DESEA USAR (RECUERDA USAR LA EXTENCION .dat)"<<endl;
	cin>>nombre;
	 cin.ignore(256,'\n');
	cout<<"Elija el tamaño del pixel art"<<endl<<endl;
	cout<<"X= ";
	cin>>pix.x;
	cout<<endl<<"Y= ";
	cin>>pix.y;
	system("cls");
	    ofstream salida;
    ifstream entrada;
    salida.seekp(0,ios::end);
    salida.open(nombre, ios::app | ios::binary);
	for(int f=0;f<=pix.y+2;f++){
		cout<<endl;
        for(int c=0;c<=pix.x+2;c++){
        	if(f<=pix.y and c==0 or c<=pix.x and f==0 or f<=pix.y+1 and c==pix.x+1 or f==pix.y+1 and c<=pix.x+1){
        		pix.p[f][c]=char(219);
			}
			else{
				pix.p[f][c]=char(00);
			}
            gotoxy(c+10,f+3);cout<<pix.p [f][c]<<" ";
                    	
        }
        
    }
    	salida.write((char*)&pix,sizeof(tamanio));
        salida.close();
    
    cout<<endl<<endl;
}
void visualizar (void){
	int i=0;
	ofstream salida;
    ifstream entrada;
    cout << "Ingrese el nombre del pixelart a ver (recuerde escribir la extrencion): " << endl;
cin >> nombre;
   entrada.open(nombre,ios::binary);
   while(entrada.read((char*)&pix,sizeof(tamanio))){
   	system("cls");
   	cout<<"PIXELART "<<nombre<<endl<<endl;
for(int f=0;f<=pix.y+2;f++){
		cout<<endl;
        for(int c=0;c<=pix.x+2;c++){
        gotoxy(c+10,f+3);cout<<pix.p [f][c]<<" ";
        }
   	}
   	cout<<endl<<endl;
   		cout<<"Pulsa una tecla para continuar...";
   	getch();
   	    i++;
    }
    entrada.close();
}
	
void editar (void){
	int X,Y;
	fstream ensa;
	int op=1;
	ofstream salida;
	cout << "Ingrese el nombre del pixelart a editar (recuerde escribir la extrencion): " << endl;
cin >> nombre;
 cin.ignore(256,'\n');
	ensa.open(nombre, ios::in| ios::binary);
int noRegistro = 0;

system("cls");
ensa.seekg( (0) * sizeof(tamanio), ios::beg );
ensa.read((char*)&pix,sizeof(tamanio));
ensa.close();
while (op != 5){
	system("cls");
	char res='s';
    	cout<<"Pixelart "<<noRegistro<<endl<<endl;
        for(int f=0;f<=pix.y+2;f++){
        	cout<<endl<<endl;
        for(int c=0;c<=pix.x+2;c++){
        gotoxy(c+10,f+3);cout<<pix.p [f][c];
        }
    }
        cout<<endl<<endl;
        cout<<"OPCIONES: "<<endl<<endl;
        cout<<"1) insertar "<<char(177)<<endl;
        cout<<"2) insertar "<<char(178)<<endl;
        cout<<"3) borrar"<<endl;
        cout<<"4) guardar "<<endl;
        cout<<"5) salir" <<endl<<endl;
        cin>>op;
        switch(op){
        	case 1:{
        		while(res == 's'){
        			system("cls");
        		        for(int f=0;f<=pix.y+2;f++){
        	cout<<endl<<endl;
        for(int c=0;c<=pix.x+2;c++){
        gotoxy(c+10,f+3);cout<<pix.p [f][c];
        }
    	}
    	cout<<endl<<endl<<"ingrese coordenadas "<<endl<<endl;
    	cout<<"X= ";
	cin>>X;
	cout<<endl<<"Y= ";
	cin>>Y;
	pix.p[Y][X]=char(177);
	system("cls");
	for(int f=0;f<=pix.y+2;f++){
        	cout<<endl<<endl;
        for(int c=0;c<=pix.x+2;c++){
        gotoxy(c+10,f+3);cout<<pix.p [f][c];
        }
    	}
	
    	cout<<endl<<endl<<"desea volver a usar esta funcion; (S/N)";
    cin>>res;
		}
    	
        		
				break;
			}
			case 2:{
				        		while(res == 's'){
        			system("cls");
        		        for(int f=0;f<=pix.y+2;f++){
        	cout<<endl<<endl;
        for(int c=0;c<=pix.x+2;c++){
        gotoxy(c+10,f+3);cout<<pix.p [f][c];
        }
    	}
    	cout<<endl<<endl<<"ingrese coordenadas "<<endl<<endl;
    	cout<<"X= ";
	cin>>X;
	cout<<endl<<"Y= ";
	cin>>Y;
	pix.p[Y][X]=char(178);
	system("cls");
	for(int f=0;f<=pix.y+2;f++){
        	cout<<endl<<endl;
        for(int c=0;c<=pix.x+2;c++){
        gotoxy(c+10,f+3);cout<<pix.p [f][c];
        }
    	}
	
    	cout<<endl<<endl<<"desea volver a usar esta funcion; (S/N)";
    cin>>res;
		}
				break;
			}
			case 3:{
				        		while(res == 's'){
        			system("cls");
        		        for(int f=0;f<=pix.y+2;f++){
        	cout<<endl<<endl;
        for(int c=0;c<=pix.x+2;c++){
        gotoxy(c+10,f+3);cout<<pix.p [f][c];
        }
    	}
    	cout<<endl<<endl<<"ingrese coordenadas "<<endl<<endl;
    	cout<<"X= ";
	cin>>X;
	cout<<endl<<"Y= ";
	cin>>Y;
	pix.p[Y][X]=char(00);
	system("cls");
	for(int f=0;f<=pix.y+2;f++){
        	cout<<endl<<endl;
        for(int c=0;c<=pix.x+2;c++){
        gotoxy(c+10,f+3);cout<<pix.p [f][c];
        }
    	}
	
    	cout<<endl<<endl<<"desea volver a usar esta funcion; (S/N)";
    cin>>res;
		}
				break;
			}
			case 4:{
				
				salida.open(nombre,ios::in | ios::binary);
				salida.seekp( (0) * sizeof(tamanio), ios::beg );
				salida.write((char*)&pix,sizeof(tamanio));
				salida.close();
				cout<<"GUARDADO Pulsa una tecla para continuar...";
   				getch();
				break;
			}
		}
}
}
