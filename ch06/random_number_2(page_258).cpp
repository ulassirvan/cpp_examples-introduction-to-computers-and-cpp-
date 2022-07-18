#include <iostream>
#include<cstdlib>
int main(){
	for (int i ; i<100;i++){
	std::cout<<(((rand()%5)+1)*2);
	std::cout<<std::endl;
}
}