#include <iostream>
#include <vector>

using namespace std;
int x=0;
int main (){
	int x=0;
	vector <int> A(10);
	for (int i=0; i<10;i++){
		A[i]=i+1;
	}
	cout<<"escriba que quiere borrar: ";
	cin>>x;
	cout<<endl<<endl;
	cout<<"la longitud total es: "<<A.size()<<endl;
	A.erase(A.begin()+i);
	cout<<"la nueva longitud es: "<<A.size()<<endl;
	for(int i=0;i<A.size();i++)
	cout<<A[i]<<" ";
	cout<<endl<<endl;
	return 0;
}
