#include<iostream>
#include<string>//standart c++ string class
using namespace std;

// Grade book class definiton
class GradeBook{
	public://public block
		GradeBook(string name){
			setCourseName(name);
			
		}
		
		void setCourseName(string name){
			course_name=name;
		}
		string getCourseName(){
			return course_name;
		}
		
		//function that displays a welcome massage to the GradeBook user
		void displayMassage(){
			cout<<"welcome top the grade book for "<<endl<<endl<<endl<<getCourseName();
		}//end of function displayMassage
	
	private:
		string course_name;
	
};//end of class GradeBook

