#include<iostream>
#include<string.h>
using namespace std;

class A{
	
	public :
		
		int n;
		void set(){
			cout<<"this is  method overloading"<<endl;
		}
		void set(int n){
			cout<<"this is one parameter must be Diffrent and method overloading "<<n<<endl;
		}
		void set(int n,int m){
			cout<<"this is two parameter must be Diffrent and method overloading "<<n<<","<<m <<endl;
		}
		void set(int n,int m,int i){
			cout<<"this is three parameter must be Diffrent and method overloading"<<n<<","<<m<<","<<i<<endl;
		}
};

int main(){
	A p;
	p.set();
	p.set(3315);
	p.set(15,8);
	p.set(15,8,23);
	return 0;
}




