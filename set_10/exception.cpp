#include<iostream>
#include<string.h>
using namespace std;

int main(){
	
	int a,b,c;
	cout<<"enter value A =";
	cin>>a;
	cout<<"enter value B =";
	cin>>b;
	
	char solution[] = "cannot divide by zero ";
	
	try{
		if(b!=0){
			c = a/b;
			cout<<"ans = "<<c<<endl;
		}
		else{
			throw 8;
//			throw solution ;
		}
	}
	
	catch(int b){
		cout<<solution<<endl;
	}
	catch(char ch[]){
		cout<<solution<<endl;
	}
	
	return 0;
	
}
