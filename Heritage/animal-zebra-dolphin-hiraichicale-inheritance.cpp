#include<iostream>
#include<string.h>
using namespace std;

class Animal{
	
	public :
	int animal_age ;
	char animal_name[100];
	
	void set_value(){
		cout<<"enter the animal age and name "<<endl;
		cout<<"animal age = ";
		cin>>animal_age;
		cout<<"animal_name = ";
		cin>>animal_name;
	}
};

class Zebra : public Animal{
	public :

	void z(){
		cout<<"enter the zebra age and name "<<endl;
		cout<<"animal age = "<<animal_age<<endl;
		cout<<"animal_name = "<<animal_name<<endl;
	}
	
};

class Dolphin : public Animal{
	public :

	void d(){
		cout<<"enter the dolphin age and name "<<endl;
		cout<<"animal age = "<<animal_age<<endl;
		cout<<"animal_name = "<<animal_name<<endl;
	}
	
};

int main(){
	
	Zebra x;
	x.set_value();
	x.z();
	
	Dolphin y;
	y.set_value();
	y.d();
	
	
	return 0;
	
}
