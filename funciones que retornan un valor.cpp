#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <vector>
using namespace std;

int suma (vector<int> &A);
vector <int> almacena (void);

int main (void){
    int i;
    vector<int>B(100,0);
    B=almacena();
    cout<<"los numeros son: "<<endl;
    for (i=0;i<B.size();i++){
        cout<<B[i]<<" ";
    }
    cout<<endl<<endl;
    cout<<"La suma de los numeros es: "<<suma(B);
}


vector <int> almacena (void){
    int i,n,ini,fin;
    vector <int> A(100,0);
    cout<<"Cuantos numeros deseas? "<<endl;
    cin>>n;
    A.resize(n);
    ini=1;
    fin=100;
    srand(time(NULL));
    for (i=1;i<A.size();i++){
        A[i]=rand()%100;
    }
    return A;
}

int suma (vector<int> &A){
    int i,sum;
    sum=0;
    for(i=0;i<A.size();i++){
        sum=sum+A[i];
    }
    return (sum);
}
