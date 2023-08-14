#include<iostream>
#include<string.h>
using namespace std;

class Manager_employee{
	
	public :
		
	int manager_id;
	char manager_name[100];
	char manager_role[100];
	int manager_salary;
	int manager_experience;
	char manager_address[100];
	char manager_email[100];
	char manager_contact[10];
	
	void setmanager(){
		cout<<"employee detial"<<endl;
		cout<<"Manager employee id = ";
		cin>>manager_id;
		cout<<"Manager employee name = ";
		cin>>manager_name;
		cout<<"Manager employee role = ";
		cin>>manager_role;
		cout<<"Manager employee salary = ";
		cin>>manager_salary;
		cout<<"Manager employee experience = ";
		cin>>manager_experience;
		cout<<"Manager employee address = ";
		cin>>manager_address;
		cout<<"Manager employee email = ";
		cin>>manager_email;
		cout<<"Manager employee contact = ";
		cin>>manager_contact;
	}


};


class Supervisor_employee{
	
	public :
		
	int supervisor_id;
	char supervisor_name[100];
	char supervisor_role[100];
	int supervisor_salary;
	int supervisor_experience;
	char supervisor_address[100];
	char supervisor_email[100];
	char supervisor_contact[10];
	
	void setsupervisor(){
		cout<<"supervisor detial"<<endl;
		cout<<"supervisor employee id = ";
		cin>>supervisor_id;
		cout<<"supervisor employee name = ";
		cin>>supervisor_name;
		cout<<"supervisor employee role = ";
		cin>>supervisor_role;
		cout<<"supervisor employee salary = ";
		cin>>supervisor_salary;
		cout<<"supervisor employee experience = ";
		cin>>supervisor_experience;
		cout<<"supervisor employee address = ";
		cin>>supervisor_address;
		cout<<"supervisor employee email = ";
		cin>>supervisor_email;
		cout<<"supervisor employee contact = ";
		cin>>supervisor_contact;
	}


};

class Employee : public Manager_employee, public Supervisor_employee{
	public :
	void getmanager(){
		cout<<"Manager employee id = "<<manager_id<<endl
			<<"Manager employee name = "<<manager_name<<endl
			<<"Manager employee role = "<<manager_role<<endl
			<<"Manager employee salary = "<<manager_salary<<endl
			<<"Manager employee experience = "<<manager_experience<<endl
			<<"Manager employee address = "<<manager_address<<endl
			<<"Manager employee email = "<<manager_email<<endl
			<<"Manager employee contact = "<<manager_contact<<endl;
	}
	
	void getsupervisor(){
		cout<<"Manager employee id = "<<supervisor_id<<endl
			<<"Manager employee name = "<<supervisor_name<<endl
			<<"Manager employee role = "<<supervisor_role<<endl
			<<"Manager employee salary = "<<supervisor_salary<<endl
			<<"Manager employee experience = "<<supervisor_experience<<endl
			<<"Manager employee address = "<<supervisor_address<<endl
			<<"Manager employee email = "<<supervisor_email<<endl
			<<"Manager employee contact = "<<supervisor_contact<<endl;
	}
};


int main(){
	
	Employee e;
	
	e.setmanager();
	e.setsupervisor();
	e.getmanager();
	e.getsupervisor();
	
	return 0;
}
