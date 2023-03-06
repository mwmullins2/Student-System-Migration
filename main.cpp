#include "roster.h"
using std::endl;

int main()
{
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	cout << "C867: Scripting and Programming - Applications" << std::endl;
	cout << "Programmed with C++" << std::endl;
	cout << "Student ID: 009750061" << std::endl;
	cout << "Matthew Mullins" << std::endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << std::endl;

	const string studentData[] =

	{
		"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Matthew,Mullins,mmul168@wgu.edu,35,14,7,21,SOFTWARE"

	};
	const int numStudents = 5;
	Roster classRoster;

	for (int i = 0; i < numStudents; i++) classRoster.parse(studentData[i]);

	cout << "Displaying All Students: " << std::endl;
	classRoster.printAll();
	cout << std::endl;
	
	cout << "Displaying students with invalid email addresses: " << std::endl;
	classRoster.printInvalidEmails();
	cout << std::endl;

	cout << "Displaying average days to complete a course: " << std::endl;
	for (int i = 0; i < numStudents; i++)
	{
		classRoster.printAverageDaysInCourse(classRoster.classRosterArray[i]->getStudentID());
	}
	
	cout << std::endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "Displaying by Degree Program: " << DegreeProgramStrings[i] << std::endl;
		classRoster.printByDegreeProgram(DegreeProgram(i));
	}

	cout << std::endl;
	cout << "Removing Student with ID A3: " << std::endl;
	classRoster.remove("A3");
	cout << std::endl;
	
	//printAll built into classRoster.remove
	
	cout << std::endl;
	cout << "Removing Student with ID A3: " << std::endl;
	classRoster.remove("A3");
	
	cout << std::endl;
	
	system ("pause");
	//Destructor will be called after key press here
	
	return 0;

}