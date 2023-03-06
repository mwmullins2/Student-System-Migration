#pragma once
#include <iostream>
#include <iomanip>
#include "degree.h"
using std::string;
using std::cout;


class Student
{
public:
	const static int daysToCompleteArray = 3;

private:
	string studentId;
	string firstName;
	string lastName;
	string emailAddress;
	int studentAge;
	int completionDays[daysToCompleteArray];
	DegreeProgram degreeProgram;
public:
	Student(); //constructor without parameters
	Student(string studentId, string firstName, string lastName, string emailAddress, int studentAge, int completionDays[], DegreeProgram degreeProgram); //Constructor
	~Student();//Destructor

	//Getters
	string getStudentID();
	string getFirstName();
	string getLastName();
	string getEmailAddress();
	int getStudentAge();
	int* getCompletionDays();
	DegreeProgram getDegreeProgram();

	//Setters
	void setStudentID(string studentID);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setEmailAddress(string emailAddress);
	void setStudentAge(int studentAge);
	void setCompletionDays(int ccompletionDays[]);
	void setDegreeProgram(DegreeProgram degreeProgam);

	static void printHeader();

	void print();
};