#include "student.h"

//Constructor without parameters
Student::Student()
{
	this->studentId = "";
	this->firstName = "";
	this->lastName = "";
	this->emailAddress = "";
	this->studentAge = 0;
	for (int i = 0; i < daysToCompleteArray; i++) this->completionDays[i] = 0;
	this->degreeProgram = DegreeProgram::SECURITY;
}

//Full ConstructortAge
Student::Student(string studentId, string firstName, string lastName, string emailAddress, int studentAge, int completionDays[], DegreeProgram degreeProgram)
{
	this->studentId = studentId;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddress = emailAddress;
	this->studentAge = studentAge;
	for (int i = 0; i < daysToCompleteArray; i++) this->completionDays[i] = completionDays[i];
	this->degreeProgram = degreeProgram;
}

//Destructor
Student::~Student() {}

//Getters
string Student::getStudentID() { return this->studentId; }
string Student::getFirstName() { return this->firstName; }
string Student::getLastName() { return this->lastName; }
string Student::getEmailAddress() { return this->emailAddress; }
int Student::getStudentAge() { return this->studentAge; }
int* Student::getCompletionDays() { return this->completionDays; }
DegreeProgram Student::getDegreeProgram() { return this->degreeProgram; }

//Setters
void Student::setStudentID(string studentId) { this->studentId = studentId; }
void Student::setFirstName(string firstName) { this->firstName = firstName; }
void Student::setLastName(string lastName) { this->lastName = lastName; }
void Student::setEmailAddress(string emailAddress) { this->emailAddress = emailAddress; }
void Student::setStudentAge(int studentAge) { this->studentAge = studentAge; }
void Student::setCompletionDays(int completionDays[]) 
{
	for (int i = 0; i < daysToCompleteArray; i++) this->completionDays[i] = completionDays[i];
}
void Student::setDegreeProgram(DegreeProgram degreeProgram) { this->degreeProgram = degreeProgram; }

void Student::print()
{
	cout << this->getStudentID() << '\t';
	cout << "First Name: " << this->getFirstName() << '\t';
	cout << "Last Name: " << this->getLastName() << '\t';
	cout << "Email: " << this->getEmailAddress() << '\t';
	cout << "Age: " << this->getStudentAge() << '\t';
	cout << "Days in Courses: {" << this->getCompletionDays()[0] << ',';
	cout << this->getCompletionDays()[1] << ',';
	cout << this->getCompletionDays()[2] <<"}" << '\t';
	cout << "Degree Program: " << DegreeProgramStrings[this->getDegreeProgram()] << '\n';
}