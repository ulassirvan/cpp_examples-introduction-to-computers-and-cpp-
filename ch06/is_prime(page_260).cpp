#include<iostream>

int isPrime(long long int sayi);
int main(void){
	
	
	for (long long int i=0;i<1000000;i++){
		if (isPrime(i)){
			std::cout<<i<<std::endl;
		}
	}
	
	return 0;
}
inline int isPrime(long long int sayi){
	long long int bolen=0;
	if (sayi==1||sayi==0) return false;
	
	for(long long int i=2;i*i<=sayi;i++)
		if (sayi%i==0) return false;
		
	return true;
	
}