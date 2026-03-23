#include <stdlib.h>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

vector <string> captura (void);
vector <string> burbuja (vector<string>&original);
void imprime (vector <string> &ordenado);

int main (void){
	vector <string> c,d;

	cout<<"****Bienvenido****"<<endl<<endl;

	c=captura();
	d=burbuja(c);
	imprime(d);
}

vector <string> captura (void){
    vector <string>B(255);
    int i,limite;
    cout <<"Cuantos nombres deseas introducir? ";
    cin >>limite;
    B.resize(limite);
    for(i=0;i<B.size();i++){
        cout<<"Ingrese nombre "<<i<<endl;
        cin>>B[i];
    }
    return B;
}

vector <string> burbuja (vector<string>&original){
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

void imprime (vector <string> &ordenado){
	cout<<"NUMEROS ORDENADOS:"<<endl<<endl;
	for (int h=0;h<ordenado.size();h++){
		cout<<ordenado[h]<<endl;
	}
}
