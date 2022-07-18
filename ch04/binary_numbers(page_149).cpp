#include<iostream>
#include<cmath>
int main(){
	int number;
	int sayac=0;
	int total=0;
	std::cin>>number;
	while(number/10.0>0){
		total+=pow(2,sayac)*(number%2);
		number=number/10;
		sayac++;
	}
	std::cout<<total;
}