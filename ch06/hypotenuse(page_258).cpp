#include<iostream>
#include<cmath>
using namespace std;
float hyp(float side1,float side2){
	return sqrt(side1*side1+side2*side2);}

int main(){
	cout<<hyp(1,3);
}