#include<iostream>
#include<string.h>
using namespace std;

class Time{
	public :
	int s;
	int hour;
	int minutes;
	int seconds;
	
};


int main(){
	
	Time t;
	
	cout<<"enter time in seconds = ";
	cin>>t.s;  //   19000
	
	t.hour = t.s/3600;  //   19000/3600 = 5
	t.s = t.s % 3600;   //  19000%3600 = 1000
	t.minutes = t.s/60;  // 1000/60  =  16
	t.seconds = t.s%60;  //  1000%60 =  40
	
	cout<<"TIME ="<<t.hour<<":"<<t.minutes<<":"<<t.seconds;
}
 
