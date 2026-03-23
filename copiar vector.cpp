#include <iostream>
#include <vector>

using namespace std;

void nueve (void);
vector<int> B;
vector <int> A(20,9);
int i=0;
char R;
int main(){
	char R='s';
	while (R=='s' or R=='S'){
		int b=0,a=0;
		
        cout<<"****BIENVENIDO****"<<endl<<endl;
		B=A;
		nueve();
	
        
        cout<<"desea usar nuevamente el programa?(s/n): ";
        cin>>R;
        cout<<endl<<endl;
    }

}
void nueve(void){
	for (i=0;i<B.size();i++){
		cout<<B[i]<<endl;
	}
	
}

