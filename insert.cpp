#include <iostream>
#include <vector>
using namespace std;

int main (){
	vector <int> A(5,9);
	A.insert(A.begin()+3,2);
	for(unsigned int i=0;i<A.size();i++)
	cout<<A[i]<<" ";
	cout<<endl<<endl;
	return 0;
}
