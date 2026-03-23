#include <iostream>
#include <math.h>
#include <vector>
#include <stdlib.h>
#include <time.h>

//programa con shell

using namespace std;

vector <int> captura (void);
vector <int> ordena (vector <int> &B);
void imprime (vector <int> &ordenado);


int main (){
	vector <int> c,d;
	
	cout<<"****Bienvenido****"<<endl<<endl;
	
	c=captura();
	d=ordena(c);
	imprime(d);
}

vector <int> captura (void){
    vector <int>B(10,0);
    int c,limite;
    cout <<"Cuantos numeros deseas introducir? ";
    cin >>limite;
    B.resize(limite);
    for(c=0;c<B.size();c++){
        cout<<"Ingrese valor "<<c<<endl;
        cin>>B[c];
    }
    return B;
}

vector <int> ordena (vector <int> &ordena){
	int i,j,inc,aux,vuelta,d=0;
	for(inc=1;inc<ordena.size();inc=inc*3+1);
	while (inc>0){
		
		for(i=inc; i<ordena.size();i++){
			j=i;
			aux=ordena[i];
			while ((j >= inc) and (ordena[j-inc] > aux))
                {
                    ordena[j] = ordena[j - inc];
                    j = j - inc;
                            
                	ordena[j]=aux;
				
							cout<<"vector modificado "<<endl<<endl;
							for (int h=0;h<ordena.size();h++){
							cout<<ordena[h]<<"   ";
                			}
                			cout<<endl<<endl;
				}
	
		}
		inc=inc/2;
	}
		return ordena;
	}
	
	void imprime (vector <int> &ordenado){
	cout<<"NUMEROS ORDENADOS:"<<endl<<endl;
	for (int h=0;h<ordenado.size();h++){
		cout<<ordenado[h]<<"   ";
	}
}



