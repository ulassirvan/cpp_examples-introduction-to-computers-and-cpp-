#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int roundToInteger(float sayi){
	return floor(sayi+.5);
}

float roundToTenths(float sayi){
	return floor(sayi*10+0.5)/10;
}

float roundToHunderedths(float sayi){
	return floor(sayi*100+0.5)/100;
}


double roundToThousandths(double sayi){
	return floor(sayi*10000+0.5)/10000;
}


int main(){
	cout<<setw(10)<<roundToInteger(5.7);
	cout<<endl;
	cout<<setw(10)<<roundToTenths(11.3549);
	cout<<endl;
	cout<<setw(10)<<roundToHunderedths(11.35491);
	cout<<endl;
	cout<<setw(10)<<roundToThousandths(11.35491);
	cout<<endl;
}