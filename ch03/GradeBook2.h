#include<string>//standart c++ string class
using namespace std;

// Grade book class definiton
class GradeBook
{
	public://public block
		GradeBook(string);
		void setCourseName(string);
		string getCourseName();
		void displayMassage();
	private:
		string course_name;
	
};//end of class GradeBook

