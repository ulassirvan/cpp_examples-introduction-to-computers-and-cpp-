#include<iostream>
class Date{
	public:
		Date(int day_input,int month_input,int year_input){
			setDay(day_input);
			setMonth(month_input);
			setYear(year_input);
		
		}
		
		void setDay(int day_input){
			day=day_input;
		}
		void setMonth(int month_input){
			month=month_input;
		}
		void setYear(int year_input){
			year=year_input;
		}
		void getTime(){
			std::cout<<day<<" "<<month<<" "<<year<<std::endl;
		}
		int getDay(){
			return day;
		}
		int getYear(){
			return year;
		}
		int getMonth(){
			return month;
		}
		
	private:
		int day;
		int year;
		int month;
		
};