#include <stdlib.h>
#include <vector>
#include <iostream>

using namespace std;

vector <int> captura (void);
vector <int> burbuja (vector<int>&original);
void imprime (vector <int> &ordenado);

int main (void){
	vector <int> c,d;
	
	cout<<"****Bienvenido****"<<endl<<endl;
	
	c=captura();
	d=burbuja(c);
	imprime(d);
}

vector <int> captura (void){
    vector <int>B(10,0);
    int i,limite;
    cout <<"Cuantos numeros deseas introducir? ";
    cin >>limite;
    B.resize(limite);
    for(i=0;i<B.size();i++){
        cout<<"Ingrese valor "<<i<<endl;
        cin>>B[i];
    }
    return B;
}

vector <int> burbuja (vector<int>&original){
	int j,i,aux;
	for(j=0;j<original.size()-1;j++){
		for(i=0;i<original.size()-1;i++){
			if(original[i]>original[i+1]){
				aux=original[i];
				original[i]=original[i+1];
				original[i+1]=aux;
			}
		}	
	} return original;
	
}

void imprime (vector <int> &ordenado){
	cout<<"NUMEROS ORDENADOS:"<<endl<<endl;
	for (int h=0;h<ordenado.size();h++){
		cout<<ordenado[h]<<endl;
	}
}


