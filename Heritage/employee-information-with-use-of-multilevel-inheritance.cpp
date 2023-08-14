#include<iostream>
#include<string.h>
using namespace std;

class A{
	public :
		int id;
		char name[100];
		char role[100];
		int  salary;
		int experience;
		char comp_name[100];
		char address[100];
		char email[100];
		char contact[100];
		
		void seta (){
			cout<<"enter employee information "<<endl;
			cout<<"id = ";
			cin>>id;
			cout<<"name = ";
			cin>>name;
			cout<<"role = ";
			cin>>role;
		}	
};

class B : public A {
	public :
		void setb(){
			cout<<"salary = ";
			cin>>salary;
			cout<<"experience = ";
			cin>>experience;
		}
};
class C : public B {
	public :
		void setc(){
			cout<<"comp name = ";
			cin>>comp_name;
			cout<<"address = ";
			cin>>address;
		}
		
		void getc(){
			cout<<"name = "<<name<<endl;
			cout<<"role = "<<role<<endl;
			cout<<"salary = "<<salary<<endl;
		}
};

class D : public C {
	public : 
		
		void setd() {
			cout<<"email = ";
			cin>>email;
			cout<<"contact = ";
			cin>>contact;
		}
		
		void getd(){
			cout<<"id = "<<id<<endl
				<<"experience = "<<experience<<endl
				<<"comp name = "<<comp_name<<endl
				<<"address = "<<address<<endl
				<<"email = "<<email<<endl
				<<"contact = "<<contact<<endl;
		}
};

int main(){
	
	D obj;
	obj.seta();
	obj.setb();
	obj.setc();
	obj.setd();
	obj.getc();
	obj.getd();
	
	return 0;
}
