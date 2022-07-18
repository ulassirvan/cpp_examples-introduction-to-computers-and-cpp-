#include<iostream>
using namespace std;
int main(){
	int sayi;
	int toplam=0;
	int sayac=0;
	cout<<"Please enter one number (for exit enter 9999): ";
	cin>>sayi;
	while(sayi!=9999){
		toplam+=sayi;
		sayac++;
		cout<<"Please enter one number (for exit enter 9999): ";
		cin>>sayi;
	}
	cout<<toplam/sayac;
}