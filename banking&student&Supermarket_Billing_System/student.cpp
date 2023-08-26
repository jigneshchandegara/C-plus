#include<iostream>
#include<string.h>
using namespace std;

class Student{
	public :
		int student_gr_id;
		char student_name[100];
		int student_std;
		char student_address[100];
		char student_contact[10];
		
		void setdata(){
			cout<<"enter student GRID = ";
			cin>>student_gr_id;
			cout<<"enter student name = ";
			cin>>student_name;
			cout<<"enter student std = ";
			cin>>student_std;
			cout<<"enter student address = ";
			cin>>student_address;
			cout<<"enter student contact = ";
			cin>>student_contact;
		}
		
		void getdata(){
			cout<<"enter student GRID = "<<student_gr_id<<endl
				<<"enter student name = "<<student_name<<endl
				<<"enter student std = "<<student_std<<endl
				<<"enter student address = "<<student_address<<endl
				<<"enter student contact = "<<student_contact<<endl;
		}
		
};
int main (){
	
	Student s;
	int i,n;
	cout<<"enter student details number = ";
	cin>>n;
	
	for(i=0; i<n; i++){
		s.setdata();
	}
	for(i=0; i<n; i++){
		s.getdata();
	}
	
	return 0;
}
