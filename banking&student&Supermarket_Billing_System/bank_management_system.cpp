#include<iostream>
#include<string.h>
using namespace std;

class Bank{
	public :
		string name;
		string account_number;
		string phone_number;
		string email;
		void welcome(){
			cout<<"                                      -: BANK MANAGMENT SYSTEM :-                  "<<endl;
			cout<<"                          ---------------------------------------------------------"<<endl;
			cout<<"                                                                                   "<<endl;
			cout<<"                                      -: Designed N Programed By :-                "<<endl;
			cout<<"                          ---------------------------------------------------------"<<endl;
			cout<<"                                          JIGNESH G CHANDEGARA                     "<<endl;
			cout<<"                                                                                   "<<endl;
			cout<<"                                                                                   "<<endl;
			cout<<"                                                                                   "<<endl;
			cout<<"                                             -: Trainer :-                         "<<endl;
			cout<<"                          ---------------------------------------------------------"<<endl;
			cout<<"                                            Meet Dhokariya                         "<<endl;
			cout<<"                                                                                   "<<endl;
			cout<<"                                      press key n enter to continue....            "<<endl;
		}
		void Enter(){
			char next ;
			cin>>next;
				switch(next ){
					case 'n':
					cout<<"                           -------------------------------------------------               "<<endl;
					cout<<"                           -:Press (l) to Log in as Administrator and Staff:-                "<<endl;
					cout<<"                           -------------------------------------------------               "<<endl;
					break;
				}
		}
		void Staff(){
			char login;
			cin>>login;
			switch(login){
				case 'l':
					cout<<"--------------------------------------------------------------------------------------------------"<<endl;
					cout<<"                                            -: Welcome as Staff :-                                "<<endl;
					cout<<"--------------------------------------------------------------------------------------------------"<<endl;
					cout<<"                                                                                                  "<<endl;
					cout<<"                                                                                                  "<<endl;
					cout<<"Enter the name of staff                         :";
					cin>>name;
					cout<<"Enter the account number of staff               :";
					cin>>account_number;
					cout<<"Enter the phone number of staff                 :";
					cin>>phone_number;
					cout<<"Enter the E-mail of staff                       :";
					cin>>email;
				break;
			}
		}
		void getstaff(){
					cout<<"--------------------------------------------------------------------------------------------------"<<endl;
					cout<<"name                        :"<<name<<endl;
					cout<<"account number              :"<<account_number<<endl;
					cout<<"phone number                :"<<phone_number<<endl;
					cout<<"E-mail                      :"<<email<<endl;
					cout<<"--------------------------------------------------------------------------------------------------"<<endl;
					cout<<"                                                                                                  "<<endl;
					cout<<"                                               Press [1] to Deposite the money :"<<endl;
					cout<<"                                                                                                  "<<endl;
					cout<<"                                               Press [2] to Transfer the money :"<<endl;
					cout<<"                                                                                                  "<<endl;
					cout<<"                                               Press [3] to Withdraw the money :"<<endl;
		}
		void dtw(){
			int money;
			cin>>money;
			int deposite, actualamount = 500000, totalbalance;
			int transfer,amount = 500000,balance;
			int withdraw,actual_amount = 500000,total_balance;
			switch(money){
				case  1:
					cout<<"                                                                                                  "<<endl;
					cout<<"--------------------------------------------------------------------------------------------------"<<endl;
					cout<<"Deposite the money  :";
					cin>>deposite;
					cout<<"--------------------------------------------------------------------------------------------------"<<endl;
					cout<<"                                                                                                  "<<endl;
					cout<<"your actual Amount is :"<<actualamount<<endl;
					cout<<"congrates Your Amount Has Deposite Successfully"<<endl;
					totalbalance = actualamount + deposite;
					cout<<"Your Account Balance is :"<<totalbalance<<endl;
				break;
				
				case  2:
					cout<<"                                                                                                  "<<endl;
					cout<<"--------------------------------------------------------------------------------------------------"<<endl;
					cout<<"Transfer the money  :";
					cin>>transfer;
					cout<<"--------------------------------------------------------------------------------------------------"<<endl;
					cout<<"                                                                                                  "<<endl;
					if(transfer >= actual_amount){
						cout<<"your account Balance not avalibel only for "<<actual_amount<<"avalibel"<<endl;
						cout<<"your are not transfer money "<<endl;
						break;
					}
					cout<<"your actual Amount is :"<<amount<<endl;
					cout<<"congrates Your Amount Has Transfer Successfully"<<endl;
					balance = amount - transfer;
					cout<<"Your Account Balance is :"<<balance<<endl;
				break;
				
				case  3:
					cout<<"                                                                                                  "<<endl;
					cout<<"--------------------------------------------------------------------------------------------------"<<endl;
					cout<<"Withdraw the money  :";
					cin>>withdraw;
					cout<<"--------------------------------------------------------------------------------------------------"<<endl;
					cout<<"                                                                                                  "<<endl;
					if(withdraw >= actual_amount){
						cout<<"your account Balance not avalibel only for "<<actual_amount<<"avalibel"<<endl;
						cout<<"your are not withdraw money "<<endl;
						break;
					}
					cout<<"your actual Amount is :"<<actual_amount<<endl;
					cout<<"congrates Your Amount Has Withdraw Successfully"<<endl;
					total_balance = actual_amount - withdraw;
					cout<<"Your Account Balance is :"<<total_balance<<endl;
				break;
			}
		}


};

int main(){
	
	Bank b;
	b.welcome();
	b.Enter();
	b.Staff();
	b.getstaff();
	b.dtw();


	
	

	return 0;
}
