#include "roster.h"
void Roster::parse(string studentData)
{
	DegreeProgram degreeProgram = DegreeProgram::SECURITY;
	if (studentData.back() == 'K') degreeProgram = DegreeProgram::NETWORK;
	else if (studentData.back() == 'E') degreeProgram = DegreeProgram::SOFTWARE;

	int rightSide = studentData.find(",");
	string studentID = studentData.substr(0, rightSide);

	int leftSide = rightSide + 1;
	rightSide = studentData.find(',', leftSide);
	string firstName = studentData.substr(leftSide, rightSide - leftSide);

	leftSide = rightSide + 1;
	rightSide = studentData.find(',', leftSide);
	string lastName = studentData.substr(leftSide, rightSide - leftSide);

	leftSide = rightSide + 1;
	rightSide = studentData.find(',', leftSide);
	string emailAddress = studentData.substr(leftSide, rightSide - leftSide);

	leftSide = rightSide + 1;
	rightSide = studentData.find(',', leftSide);
	int age = stoi(studentData.substr(leftSide, rightSide - leftSide));

	leftSide = rightSide + 1;
	rightSide = studentData.find(',', leftSide);
	int daysInCourse1 = stoi(studentData.substr(leftSide, rightSide - leftSide));

	leftSide = rightSide + 1;
	rightSide = studentData.find(',', leftSide);
	int daysInCourse2 = stoi(studentData.substr(leftSide, rightSide - leftSide));

	leftSide = rightSide + 1;
	rightSide = studentData.find(',', leftSide);
	int daysInCourse3 = stoi(studentData.substr(leftSide, rightSide - leftSide));

	add(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram)
{
	int parr[3] = { daysInCourse1,daysInCourse2,daysInCourse3 };
	classRosterArray[++finalIndex] = new Student(studentID, firstName, lastName, emailAddress, age, parr, degreeProgram);

};

// printall() now uses print() instead of accessors

void Roster::printAll()
{
	for (int i = 0; i < finalIndex + 1; i++)
	{
		classRosterArray[i]->print();
	}
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram)
{

	for (int i = 0; i <= Roster::finalIndex; i++) {
		if (Roster::classRosterArray[i]->getDegreeProgram() == degreeProgram) classRosterArray[i]->print();
	}
	cout << std::endl;
}

void Roster::printInvalidEmails()
{
	bool any = false;
	for (int i = 0; i <= Roster::finalIndex; i++)
	{
		string eAdd = (classRosterArray[i]->getEmailAddress());
		if (eAdd.find(' ') != string::npos || (eAdd.find('@') == string::npos || (eAdd.find('.') == string::npos)))
		{
			any = true;
			cout << eAdd << ": " << classRosterArray[i]->getFirstName() << std::endl;
		}
	}
	if (!any) cout << "NONE" << std::endl;
}

void Roster::printAverageDaysInCourse(string studentID)
{
	for (int i = 0; i <= Roster::finalIndex; i++)
	{
		if (classRosterArray[i]->getStudentID() == studentID)
		{
			cout << studentID << ":";
			cout << (classRosterArray[i]->getCompletionDays()[0] +
				classRosterArray[i]->getCompletionDays()[1] +
				classRosterArray[i]->getCompletionDays()[2]) / 3.0 << std::endl;
		}
	}
}

void Roster::remove(string studentID)
{
	bool success = false;
	for (int i = 0; i <= Roster::finalIndex; i++)
	{
		if (classRosterArray[i]->getStudentID() == studentID)
		{
			success = true;
			if (i < numStudents - 1)
			{
				Student* temp = classRosterArray[i];
				classRosterArray[i] = classRosterArray[numStudents - 1];
				classRosterArray[numStudents - 1] = temp;
			}
			Roster::finalIndex--;
		}
	}
	if (success)
	{
		cout <<"Student " << studentID << " has been removed from roster." << std::endl << std::endl;
		this->printAll();
	}
	else cout <<"Student " << studentID << " was not found in the roster." << std::endl << std::endl;
}

Roster::~Roster()
{
	cout << "Calling Destructor." << std::endl << std::endl;
	for (int i = 0; i < numStudents; i++)
	{
		cout << "Removing Student #" << i + 1 << std::endl;
		delete classRosterArray[i];
		classRosterArray[i] = nullptr;
	}
}
