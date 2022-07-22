#include<iostream>
using namespace std; 
int gcd(int,int);

int main(void){
	cout<<gcd(18,6);
}

int gcd(int x, int y)
{
	if (y==0){
		return x;
	}
	else{
		return gcd(y,x%y);
	}
}