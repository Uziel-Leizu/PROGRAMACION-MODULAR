#include <stdlib.h>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

vector <string> captura (void);
vector <string> burbuja1 (vector<string>&original);
vector <string> burbuja2 (vector<string>&original);
void imprime (vector <string> &ordenado);
void imprime2 (vector <string> &ordenado2);
int limite;
int main (void){
	vector <string> c,d,e;

	cout<<"****Bienvenido****"<<endl<<endl;

	c=captura();
	d=burbuja1(c);
	e=burbuja2(c);
	imprime(d);
	imprime2(e);
}

vector <string> captura (void){
    vector <string>B(255);
    int i;
    cout <<"Cuantos nombres deseas introducir? ";
    cin >>limite;
    B.resize(limite);
    for(i=0;i<B.size();i++){
        cout<<"Ingrese nombre "<<i<<endl;
        getline(cin,A[i]);

    }
    return B;
}

vector <string> burbuja1 (vector<string>&original){
	int j,i;
	string aux;
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
vector <string> burbuja2 (vector<string>&original){
	int j,i;
	string aux;
	for(j=0;j<original.size()-1;j++){
		for(i=0;i<original.size()-1;i++){
			if(original[i]<original[i+1]){
				aux=original[i];
				original[i]=original[i+1];
				original[i+1]=aux;
			}
		}
	} return original;

}

void imprime (vector <string> &ordenado){
	cout<<"NUMEROS ORDENADOS ASENDENTE:"<<endl<<endl;
	for (int h=0;h<ordenado.size();h++){
		cout<<ordenado[h]<<endl;
	}
}

void imprime2 (vector <string> &ordenado){
	cout<<"NUMEROS ORDENADOS DESENDENTE:"<<endl<<endl;
	for (int h=0;h<ordenado.size();h++){
		cout<<ordenado[h]<<endl;
}
}
