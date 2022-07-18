#include<iostream>
using namespace std;
int main(){
	int kare;
	cout<<"please enter 1 number: ";
	cin>>kare;
	int i=0;
	while(i<kare){
		cout<<"*";	
		i++;	
	}
	cout<<endl;
	i=0;
	int j=0;
	while(i<(kare-2)){
		i++;
		cout<<"*";
		j=0;
		while(j<(kare-2)){
			cout<<" ";
			j++;			
		}
		cout<<"*";
		cout<<endl;
	}
	
	i=0;
	while(i<kare){
		cout<<"*";	
		i++;	
	}
	
	
	
}