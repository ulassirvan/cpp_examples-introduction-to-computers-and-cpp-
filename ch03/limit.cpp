#include<iostream>
int main(){
	double area=0;
	double step=0.0000004;
	for(long i=0;i<10000000;i++)
	{
		area=area+(step*i*step*i*step);
	}
	std::cout<<area;
}
