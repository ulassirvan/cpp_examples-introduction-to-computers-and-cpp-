#include<iostream>
float CelToFah(float cel){
	return ((cel*1.8)+32);
}

int main(void){
	for(float i=-280;i<500;i+=1)
	{
		std::cout<<CelToFah(i)<<std::endl;
	}
	return 0;
}