#include<iostream>
#include<string.h>
using namespace std;


/*

variable = attributes, data member
function = data memberfunction, method

*/

class Hotel{
	private :
	
	int id;
	char name[100];
	char type[100];
	int staff_size;
	int room_size;
	int establish_year;
	char address[100];
	char rating_type[100];
	char website[100];
	
	public :
	
	void setdata(int id, char name[],char type[], int staff_size,int room_size, int establish_year,char address[],char rating_type[], char website[]){
		
	this->id=id;
	strcpy(this->name,name);
	strcpy(this->type,type);
	this->staff_size=staff_size;
	this->room_size=room_size;
	this->establish_year=establish_year;
	strcpy(this->address,address);
	strcpy(this->rating_type,rating_type);
	strcpy(this->website,website);
	}
	
	void getdata(){
		
		cout<<"Hotel id = "<<id<<endl
			<<"Hotel name = "<<name<<endl
			<<"Hotel type = "<<type<<endl
			<<"Hotel staff size = "<<staff_size<<endl
			<<"Hotel room size = "<<room_size<<endl
			<<"Hotel establish year = "<<establish_year<<endl
			<<"Hotel address = "<<address<<endl
			<<"Hotel rating_type = "<<rating_type<<endl	
			<<"Hotel website = "<<website<<endl;
	}
	
};

int main(){
	
	Hotel h,h1;
	h.setdata(3315,"abcdhotel","veg",75,100,1995,"xyz","5*","abccom");
	h.getdata();
	h1.setdata(420,"rajhotel","nonveg",60,80,1998,"jhg","4*","rajcom");
	h1.getdata();
	
}

