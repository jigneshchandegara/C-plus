#include<iostream>
#include<string.h>
using namespace std;

class  A{  // abstract class
	public :
		virtual void set() = 0;
		
};
class B: public A{
	
	public: 
		virtual void show() = 0;
		void set(){
			cout<<"class A function inherit in class B "<<endl;
		}
		void get(){
			cout<<"get method"<<endl;
		}
};
class C: public B{
	public :
		void show(){
			cout<<"show function"<<endl;
		}
};


int main(){
	
	B *p;
	C c;
	p = &c;
	p->set();
	p->get();
	p->show();
	
	return 0;
}
