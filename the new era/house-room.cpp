#include<iostream>
#include<string.h>
using namespace std;

class House{
	public :
	int house_no;
	char house_name[100];
	char house_city[100];
	char house_state[100];
	int room_length;
	int room_size;
	int room_breath;

};

int main(){
	
	House h;
	
	cout<<"house no =";
	cin>>h.house_no;
	cout<<"house name =";
	cin>>h.house_name;
	cout<<"house city =";
	cin>>h.house_city;
	cout<<"house state =";
	cin>>h.house_state;
	cout<<"room length =";
	cin>>h.room_length;
	cout<<"room size =";
	cin>>h.room_size;
	cout<<"room breath =";
	cin>>h.room_breath;
	
	
	cout<<"house no ="<<h.house_no<<endl
		<<"house name ="<<h.house_name<<endl
		<<"house city ="<<h.house_city<<endl
		<<"house state ="<<h.house_state<<endl
		<<"house length ="<<h.room_length<<endl
		<<"house size ="<<h.room_size<<endl
		<<"house breath ="<<h.room_breath<<endl;
	
	
}
