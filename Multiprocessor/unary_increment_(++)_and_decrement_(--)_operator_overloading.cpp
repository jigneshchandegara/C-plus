#include<iostream>
#include<string.h>
using namespace std;


class points{
	public :
		
	int x;
	
	void set(int x){
		this -> x = x;
	}
	void get(){
		cout<<"X = "<<x<<endl;
	}
	operator++(int){
		return x++;
	}
	operator--(int){
		return x--;
	}
		
};
int main(){
	 
	points p,p1;
	p.set(6);
	p.get();
	p++;//p.operator++(int)
	p.get();
	
	p1.set(9);
	p1.get();
	p1--;//p.operator--(int)
	p1.get();
	return 0;
}
