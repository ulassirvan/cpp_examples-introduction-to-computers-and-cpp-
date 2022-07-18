#include<iostream>
using namespace std;
int main(){
	int number1,number2,number3;
	cout<<"please enter 1 number of (odd even)"<<endl;
	cin>>number1;
	if (number1%2==0){
		cout<<"number1 is even number "<<endl;
	}
	if (number1%2==1){
		cout<<"number1 is odd number "<<endl;
	}
	cout<<"please enter 2 number"<<endl;
	cin>>number2>>number3;
	if (number2%number3==0){
		cout<<"multiple";
	}
	
}
