#include<iostream>
using namespace std;
int main(){
	int number1,number2;
	cout<<"please enter first number "<<endl;
	cin>>number1;
	cout<<"please enter second number"<<endl;
	cin>>number2;
	cout<<"nuber1 : "<<number1<<endl<<"number2 : "<<number2<<endl;
	if (number1>number2){
		cout<<"number1 is greater than number2"<<endl;
	}
	if (number2>number1){
		cout<<"number2 is greater than number1"<<endl;
	}
	if (number1==number2){
		cout<<"number1 is equal to number2"<<endl;
	}
	
}
