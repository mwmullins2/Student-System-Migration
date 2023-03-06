#pragma once
#include "student.h"

class Roster
{
public:
	int finalIndex = -1;
	const static int numStudents = 5;
	Student* classRosterArray[numStudents];

public:

	void parse(string row);
	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
	void printAll();
	void printAverageDaysInCourse(string studentID);
	void printInvalidEmails();
	void printByDegreeProgram(DegreeProgram degreeProgram);
	void remove(string studentID);
	~Roster();
};