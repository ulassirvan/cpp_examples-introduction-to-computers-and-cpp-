#include<iostream>
#include<cmath>
double distance_between_points(double x1,double y1,double x2,double y2){
	return sqrt(pow(abs(x1-x2),2)+pow(abs(y1-y2),2));
	
}
int main(void){
	std::cout<<distance_between_points(0,0,3,4);
}