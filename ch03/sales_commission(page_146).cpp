#include<iostream>
int main(){
	float sales;
	float base=200;
	std::cout<<"enter sales in dollars (-1 to exit): "<<std::endl;
	std::cin>>sales;
	while(sales!=-1){
		std::cout<<"sallary is: "<<base+(sales*9/100)<<std::endl;
		std::cout<<"enter sales in dollars (-1 to exit): "<<std::endl;
	    std::cin>>sales;
	}
}