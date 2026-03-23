#include <iostream>
#include <vector>

using namespace std;
int main (){
	vector <int> A(20,9);
	
	cout<<"El tamano aneterio era: "<<A.size()<<endl;
	A.resize(5);
	cout<<"el nuevo tamano es: "<<A.size()<<endl;
	return 0;
}
