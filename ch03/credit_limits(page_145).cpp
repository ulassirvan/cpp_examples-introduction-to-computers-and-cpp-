#include<iostream>
int main(){
	int account_number;
	float balance_beginning;
	float total_item_charged;
	float total_credits;
	float credit_limit;
	float new_balance;
	
	std::cout<<"Please enter account number (enter -1 to exit): "<<std::endl;
	std::cin>>account_number;
	while(account_number!=-1){
		std::cout<<"Enter beginning balance: ";
		std::cin>>balance_beginning;
		std::cout<<"Enter total charges: ";
		std::cin>>total_item_charged;
		std::cout<<"Enter total credits:";
		std::cin>>total_credits;
		std::cout<<"Enter credit limit:";
		std::cin>>credit_limit;
		new_balance=balance_beginning+total_item_charged-total_credits;
		std::cout<<"new balance:"<<new_balance<<std::endl;
		if (new_balance>credit_limit){
			std::cout<<"credit limit exceeded"<<std::endl;
		}
		std::cout<<"Please enter account number (enter -1 to exit): "<<std::endl;
		std::cin>>account_number;
	}
}