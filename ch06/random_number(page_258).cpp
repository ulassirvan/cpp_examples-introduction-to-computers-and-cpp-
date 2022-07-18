#include <iostream>
#include<cstdlib>
int main(){
	for (int i ; i<1000;i++){
	std::cout<<(rand()%112)+1000;
	std::cout<<std::endl;
}
}