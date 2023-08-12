#include<iostream>
#include<string.h>
using namespace std;


/*

variable = attributes, data member
function = data memberfunction, method

*/

class Employee{
	public :
	int id;
	char name[100];
	char role[100];
	int salary;
	int experience;
	char address[100];
	char email[100];
	char contact[10];
	
	void setdata(){
		
		cout<<"enter employee id = ";
		cin>>id;
		cout<<"enter employee name = ";
		cin>>name;
		cout<<"enter employee role = ";
		cin>>role;
		cout<<"enter employee salary = ";
		cin>>salary;
		cout<<"enter employee experience = ";
		cin>>experience;
		cout<<"enter employee address = ";
		cin>>address;
		cout<<"enter employee email = ";
		cin>>email;
		cout<<"enter employee contact = ";
		cin>>contact;
	}
	
	void getdata(){
		
		cout<<"employee id = "<<id<<endl
			<<"employee name = "<<name<<endl
			<<"employee role = "<<role<<endl
			<<"employee salary = "<<salary<<endl
			<<"employee experience = "<<experience<<endl
			<<"employee address = "<<address<<endl
			<<"employee email = "<<email<<endl
			<<"employee contact = "<<contact<<endl;	
	}
	
};

main(){
	
	Employee e[100];
	int n,i;
	cout<<"how many student data enter = ";
	cin>>n;
	
	for(i=0; i<n; i++){
		e[i].setdata();
	}
	
	for(i=0; i<n; i++){
		e[i].getdata();
	}
}

