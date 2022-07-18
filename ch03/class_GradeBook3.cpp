#include<iostream>
#include<string>//standart c++ string class
using namespace std;

// Grade book class definiton
class GradeBook{
	public://public block
		void setCourseName(string name){
			course_name=name;
		}
		string getCourseName(){
			return course_name;
		}
		
		//function that displays a welcome massage to the GradeBook user
		void displayMassage(){
			cout<<"welcome top the grade book for "<<getCourseName();
		}//end of function displayMassage
	
	private:
		string course_name;
	
};//end of class GradeBook


int main(){
	
	GradeBook myGradeBook;//create a GradeBook object named myGradeBook
	string text;
	
	cout<<"Please enter the course name:"<<endl;
	getline(cin,text);//read a course name with blanks
	
	
	myGradeBook.setCourseName(text);
	myGradeBook.displayMassage();//call object's displayMassage function 
	return 0;
	
}
