#include<iostream>
#include<cmath>
using namespace std;
long long dividedInt(long long number1,long long number2){
	return number1/number2;
}
long long remainder(long long number1,long long number2){
	return number1%number2;
}
long long power(long long number1,long long number2){
	long long number=1;
	for (int i=1;i<=number2;i++){
		number*=number1;
	}
	return number;
}
int main(){
	long long number;
	long long cunter=1;
	cout<<"please enter one number: "<<std::endl;
	cin>>number;
	while(number!=0){
		cout<<"-------------------------";
		cout<<endl;
		cout<<"number"<<number;
		cout<<endl;
		cout<<(remainder(number,(power(10,cunter))))/power(10,(cunter-1));
		cout<<endl;
		cout<<"remainder"<<(remainder(number,(power(10,cunter))));
		cout<<endl;
		cout<<"bolum"<<power(10,(cunter-1));
		cout<<endl;
		number=number-remainder(number,(power(10,cunter)));
		cunter++;
	}
}