#include<iostream>
#include<string>//standart c++ string class
using namespace std;

// Grade book class definiton
class GradeBook{
	public:
		//function that displays a welcome massage to the GradeBook user
		void displayMassage(string course_name){
			cout<<"welcome top the grade book for "<<course_name;
		}//end of function displayMassage
};//end of class GradeBook


int main(){
	
	GradeBook myGradeBook;//create a GradeBook object named myGradeBook
	string text;
	
	cout<<"Please enter the course name:"<<endl;
	getline(cin,text);//read a course name with blanks
	
	
	
	myGradeBook.displayMassage(text);//call object's displayMassage function with text varible 
	return 0;
	
}
