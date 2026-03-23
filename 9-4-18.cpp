#include <iostream>
#include <string>
using namespace std;

main (void){
    string C1,C2,nombre;
    int res;
    C1="HOLA";
    C2="MUNDO";

    cout<<C1<<endl;
    cout<<C2<<endl;

    C1=C1+C2;
    cout<<C1<<endl;
    res=C1 != C2;
    cout <<C1<<"Diferente"<<C2<<res;
    cout<<"como te llamas? ";
    cin>>nombre;
}
