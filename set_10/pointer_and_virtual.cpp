#include<iostream>
#include<string.h>
using namespace std;

class A{
	
	public :
	virtual void print(){
		cout<<"method form class A virtual and pointer "<<endl;
	}
};
class B :public A{
	 
	 public :
	 	void print(){
	 	cout<<"method form class B virtual and pointer "<<endl;	
		}
};
int main(){
	
	
	A *p;
	A  a;
	B  b;
	p = &b;
	p->print();
	p = &a;
	p->print();
	
	
	
	
	return 0;

}
