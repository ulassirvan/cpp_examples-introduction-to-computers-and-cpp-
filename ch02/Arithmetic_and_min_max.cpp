#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int x,y,z;
	cout<<"please enter 3 number"<<endl;
	cin>>x>>y>>z;
	cout<<"sum is "<<x+y+z<<endl;
	cout<<"average is "<<(x,y,z)/3<<endl;
	cout<<"prodact is "<<x*y*z<<endl;
	cout<<"smallest is "<<min(min(x,y),z)<<endl;
	cout<<"Largest is "<<max(max(x,y),z)<<endl;

}
