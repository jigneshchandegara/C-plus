#include<iostream>
#include<string.h>
using namespace std;

class Values {
	
	private :
	
	int a;
	int b;

		
	public :
		Values(int a,int b){
			a = a;
			b = b;
			cout<<"A = "<<a <<"  "<<"B = "<<b<<endl;
		}
		Values(){
			cout<<"default constructor"<<endl;
		}
		
};

int main(){
	
	Values v1(10,60);

	Values v2(199,26);

	Values v3(24,3);

	Values v4(56,3);
	


	
	
	return 0;
}


