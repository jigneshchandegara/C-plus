#include<iostream>
#include<string.h>
using namespace std;

class Supermarket{
	public :
		int item_number;
		string item_name;
		int quantity;
		int price;
		int tex;
		int discount;
		int total;
		
	void setsupermarket(){
		cout<<"Supermarket Billing details"<<endl;
		cout<<"Enter item number = ";
		cin>>item_number;
		cout<<"Enter item name = ";
		cin>>item_name;
		cout<<"Enter quantity = ";
		cin>>quantity;
		cout<<"Enter item price = ";
		cin>>price;
		cout<<"Enter tex = ";
		cin>>tex;
		cout<<"Enter discount = ";
		cin>>discount;
	}
	
	void getsupermarket(){
		
		cout<<"item number = "<<item_number<<endl;
		cout<<"item name = "<<item_name<<endl;
		cout<<"quantity = "<<quantity<<endl;
		cout<<"Enter item price = "<<price<<endl;
		tex *=quantity;
		cout<<"tex = "<<tex<<endl;
		cout<<"discount = "<<discount<<endl;
		total = (quantity*price)+tex-discount;
		cout<<"TOTAL BILL = "<<total<<endl;
	}
}; 

int main(){
	
	Supermarket s;
	
	cout<<"Enter username -> jignesh"<<endl;
	cout<<"Enter password -> 987654"<<endl;
	
	char username1[] = "jignesh";
	char password1[] = "987654";
	
	char username[20];
	char password[20];
	
	cout<<"Enter username :- ";
	cin>>username;
	cout<<"Enter password :- ";
	cin>>password;
	
	
	if((strcmp(username1, username) == 0) && (strcmp(password1, password) == 0)){
		cout<<"success";
		s.setsupermarket();
		s.getsupermarket();
	}
	else{
		cout<<"fail";
	}

	
	return 0;
}
