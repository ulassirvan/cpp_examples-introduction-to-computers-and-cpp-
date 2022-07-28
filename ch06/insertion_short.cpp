#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int temp=0;
	int last_location=0;
	const int list_namber=8;
	int data[list_namber]{4,3,2,10,12,1,5,6};
	for(int i=0 ;i<list_namber;i++)
		cout<<setw(4)<<data[i];
	for(int i=1;i<list_namber;i++){
		temp=data[i];
		for(int j=i-1;j>=0;j--){
			if (temp<data[j]){
				data[j+1]=data[j];
				data[j]=temp;
				}
		}
	}
	cout<<endl;
	for(int i=0 ;i<list_namber;i++)
		cout<<setw(4)<<data[i];
}