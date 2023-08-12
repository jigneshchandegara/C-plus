#include<iostream>
#include<string.h>
using namespace std;

class County{
	
	public :
		
		static char c_name[100];
		char state_name[100];
		char city_name[100];
		int city_pen_coda;
		char society_name[100];
		int house_number;
		char address[100];
		char contact[10];
		
		void setdata(){
			
			cout<<"state name = ";
			cin>>state_name;
			cout<<"city name = ";
			cin>>city_name;
			cout<<"city pen code = ";
			cin>>city_pen_coda;
			cout<<"society name = ";
			cin>>society_name;
			cout<<"house number = ";
			cin>>house_number;
			cout<<"address = ";
			cin>>address;
			cout<<"contact = ";
			cin>>contact;
			
		}
		

		
		void getdata(){
			
			cout<<"county name ="<<c_name<<endl;
				<<"state name = "<<state_name<<endl
				<<"city name = "<<city_name<<endl
				<<"city pen code = "<<city_pen_coda<<endl
				<<"society_name = "<<society_name<<endl
				<<"house number = "<<house_number<<endl
				<<"address = "<<address<<endl
				<<"contact = "<<contact<<endl;
		}
		
};

char  County :: c_name[] = "INDIA";

main(){
	
	County c[100];
	int n,i;
	cout<<"how many state information = ";
	cin>>n;
	
	
	for(i=0; i<n; i++){
		c[i].setdata();
	}
	
	for(i=0; i<n; i++){
		c[i].getdata();
	}
	
	

}


