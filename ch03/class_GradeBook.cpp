#include<iostream>
using namespace std;

// Grade book class definiton
class GradeBook{
	public:
		//function that displays a welcome massage to the GradeBook user
		void displayMassage(){
			cout<<"welcome top the grade book!";
		}//end of function displayMassage
};//end of class GradeBook


int main(){
	
	GradeBook myGradeBook;//create a GradeBook object named myGradeBook
	myGradeBook.displayMassage();//call object's displayMassage function
	return 0;
	
}
