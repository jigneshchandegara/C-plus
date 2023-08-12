#include<iostream>
#include<string.h>
using namespace std;

class Distance{
	public :
	int feet;
	int inch;
};

int main(){
	Distance d,d1,sum;
	
	cout<<"enter first distance"<<endl;
	cout<<"enter feet = ";
	cin>>d.feet;
	cout<<"enter inch = ";
	cin>>d.inch;
	cout<<"enter second distance"<<endl;
	cout<<"enter feet = ";
	cin>>d1.feet;
	cout<<"enter inch = ";
	cin>>d1.inch;
	sum.feet = d.feet + d1.feet;
	sum.inch = d.inch + d1.inch;
	
	while(sum.inch>=12){
		sum.feet++;
		sum.inch-=12;
	}
	
	cout<<"sum of feet = "<<sum.feet<<endl;
	cout<<"sum of inch = "<<sum.inch<<endl;
}
