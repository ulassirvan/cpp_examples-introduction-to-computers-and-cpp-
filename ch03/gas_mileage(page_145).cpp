#include<iostream>
int main(){
	float mil ,galon;
	float total_mil,total_galon;
	std::cout<<"Enter miles driven (-1 to quit):"<<std::endl;
	std::cin>>mil;
	while (mil!=-1){
		std::cout<<"Enter gallons used: "<<std::endl;
		std::cin>>galon;
		total_galon+=galon;
		total_mil+=mil;
		std::cout<<"MPG this trip:"<<mil/galon<<std::endl;
		std::cout<<"Total MPG: "<<total_mil/total_galon<<std::endl;
		std::cout<<"Enter miles driven (-1 to quit):";
		std::cin>>mil;
	}
	
}