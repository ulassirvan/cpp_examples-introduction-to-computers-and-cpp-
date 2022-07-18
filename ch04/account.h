#include<iostream>
#include<string>
using namespace std;
class Account
{
	public:
		
Account(string name,int inital_balance)
	{
		setPerson(name);
		setBalance(inital_balance);
	}
	
	void setPerson(string name){
		person=name;
	}	
	void setBalance(int miktar){		
		if(miktar>=0){
		balance=miktar;}
		else{
		balance=0;	
		}
	}
	string getPerson(){
		return person;
	}
	int getBalance(){
		return balance;
	}
	
	private:
		string person;
		int balance;;
};