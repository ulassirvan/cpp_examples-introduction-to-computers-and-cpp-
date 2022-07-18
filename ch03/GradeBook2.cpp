#include <iostream>
#include "GradeBook2.h"
#include <string>
using namespace std;

// Grade book class definiton
GradeBook::GradeBook(string name){
	setCourseName(name);
}
		
void GradeBook::setCourseName(string name){
	course_name=name;
}
string GradeBook::getCourseName(){
	return course_name;
}
		
		
void GradeBook::displayMassage(){
	cout<<"welcome top the grade book for "<<endl<<endl<<endl<<getCourseName();
	}
