#include<iostream>
#include<string.h>
using namespace std;

class Time{
	public :
	int hour;
	int Minutes;
	int second;
};

int main(){
	Time h,h1,sum;
	
	cout<<"enter first time"<<endl;
	cout<<"enter hour = ";
	cin>>h.hour;
	cout<<"enter Minutes = ";
	cin>>h.Minutes;
	cout<<"enter second = ";
	cin>>h.second;
	cout<<"enter second time"<<endl;
	cout<<"enter hour = ";
	cin>>h1.hour;
	cout<<"enter Minutes = ";
	cin>>h1.Minutes;
	cout<<"enter second = ";
	cin>>h1.second;
	sum.hour = h.hour + h1.hour;
	sum.Minutes = h.Minutes + h1.Minutes;
	sum.second = h.second + h1.second;
	
	while(sum.Minutes>=60){
		sum.hour++;
		sum.Minutes-=60;
	}
	
	while(sum.second>=60){
		sum.Minutes++;
		sum.second-=60;
	}
	
	cout<<"sum of hour = "<<sum.hour<<endl;
	cout<<"sum of minutes = "<<sum.Minutes<<endl;
	cout<<"sum of second = "<<sum.second<<endl;
}
