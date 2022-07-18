#include<iostream>
#include"Account.h"
using namespace std;
int main(){
	Account hesap1("ulas",123);
	hesap1.setBalance(-554);
	cout<<hesap1.getBalance();
	
}