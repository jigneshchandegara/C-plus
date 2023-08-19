#include<iostream>
#include<string.h>
using namespace std;

class Mother{
	
	public :
		void display(){
			cout<<"this is parents class and method overriding"<<endl;
		}
};

class Daugther : public Mother{
		
	public :
		void display(){
			cout<<"this is child class and method overriding"<<endl;
		}
};
int main(){
	
	Daugther a; 
	a.display();
	a.Mother::display();  //method overriding
	
	
	return 0;
}
