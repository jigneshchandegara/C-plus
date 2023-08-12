#include<iostream>
#include<string.h>
using namespace std;

class student{
	public :
		
	int id;
	char name[100];
		
};

class Employee{
	
	private :
		
	int employee_no;
	char employee_name[100];
	
};

int main(){
	
	student s;
	
	cout<<"enter student details : "<<endl;
	cout<<"student id =" ;
	cin>>s.id;
	cout<<"student name =" ;
	cin>>s.name;
	
	cout<<s.id<<endl;
	cout<<s.name<<endl;
	
	Employee e;
	
	cout<<"enter employee details : "<<endl;
	cout<<"employee no =" ;
	cin>>e.employee_no;
	cout<<"employee name =" ;
	cin>>e.employee_name;
	
	cout<<e.employee_no<<endl;
	cout<<e.employee_name<<endl;
}
