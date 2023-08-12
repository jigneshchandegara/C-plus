#include<iostream>
#include<string.h>
using namespace std;

class student{
	
	public :
		int stu_roll;
		char stu_name[100];
		
		student(int a,char b[]){
			stu_roll = a;
			strcpy(stu_name,b);
			cout<<"stu_roll = "<<stu_roll<<" "<<"stu_name = "<<stu_name<<endl;
		}
		student(){
			cout<<"default constructor"<<endl;
		}
		
};

int main(){
	
	student s1(12,"jignesh");
	student s2(1,"meet");
	student s3;
	
	return 0;
}
