#include<iostream>
#include<string.h>
using namespace std;

class Mother{
	
	public :
		int  mother_age = 45;
		void display(){
			cout<<"this is parents class"<<endl;
		}
};

class Daugther : public Mother{
	
	public :
		int  daugther_age = 18;
		void display(){
			cout<<"this is child class"<<endl;
		}
};
int main(){
	
	Daugther a;
	
	cout<<"mother_age"<<a.mother_age<<endl;
	cout<<"daugther_age"<<a.daugther_age<<endl;
	a.display();
	
	return 0;
}
