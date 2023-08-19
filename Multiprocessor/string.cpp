#include<iostream>
#include<string.h>
using namespace std;

class Messsage{
	private :
		string name;
	public :
		string surname;
	Messsage(string name){
		this -> name = name;
	}
	void print(){
		cout<<"student name =";
	}
	void print(string surname){
		cout<<name<<" "<<surname<<endl;
	}
};
int main(){
	Messsage m("jignesh");
	m.print();
	m.print("chandegara");
	
}
