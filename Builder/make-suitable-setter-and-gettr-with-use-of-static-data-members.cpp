#include<iostream>
#include<string.h>
using namespace std;

class Highschool{
	
	public :
	
	int student_id;
	char student_name[100];
	int student_roll_no;
	int student_standard;
	int student_age;
	char student_contact[100];
	char student_adderss[100];
	static char student_education_institute[100];
	
	void sethighschool(){
		cout<<"Highschool student details"<<endl;
		cout<<"student id = ";
		cin>>student_id;
		cout<<"student name = ";
		cin>>student_name;
		cout<<"student roll no = ";
		cin>>student_roll_no;
		cout<<"student standard = ";
		cin>>student_standard;
		cout<<"student age = ";
		cin>>student_age;
		cout<<"student contact = ";
		cin>>student_contact;
		cout<<"student adderss = ";
		cin>>student_adderss;
	}
	
	
	void gethighschool(){
		cout<<"student id = "<<student_id<<endl;
		cout<<"student name = "<<student_name<<endl;
		cout<<"student roll no = "<<student_roll_no<<endl;
		cout<<"student standard = "<<student_standard<<endl;
		cout<<"student age = "<<student_age<<endl;
		cout<<"student contact = "<<student_contact<<endl;
		cout<<"student adderss = "<<student_adderss<<endl;
		cout<<"student education institute = "<<student_education_institute<<endl;
	}
};

class College{
	
	public :
	
	int student_id;
	char student_name[100];
	int student_roll_no;
	int student_standard;
	int student_age;
	char student_contact[100];
	char student_adderss[100];
	static char student_education_institute[100];
	
	void setcollege(){
		cout<<"college student details"<<endl;
		cout<<"student id = ";
		cin>>student_id;
		cout<<"student name = ";
		cin>>student_name;
		cout<<"student roll no = ";
		cin>>student_roll_no;
		cout<<"student standard = ";
		cin>>student_standard;
		cout<<"student age = ";
		cin>>student_age;
		cout<<"student contact = ";
		cin>>student_contact;
		cout<<"student adderss = ";
		cin>>student_adderss;
	}
	
	void getcollege(){

		cout<<"student id = "<<student_id<<endl
			<<"student name = "<<student_name<<endl
			<<"student roll no = "<<student_roll_no<<endl
			<<"student standard = "<<student_standard<<endl
			<<"student age = "<<student_age<<endl
			<<"student contact = "<<student_contact<<endl
			<<"student adderss = "<<student_adderss<<endl
			<<"student education institute = "<<student_education_institute<<endl;
	}
	
};

char Highschool :: student_education_institute[] = "red";
char College :: student_education_institute[] =  "white";

int main(){
	
	Highschool h;
	h.sethighschool();
	h.gethighschool();
	
	College c;
	c.setcollege();
	c.getcollege();
	

	return 0;
}
