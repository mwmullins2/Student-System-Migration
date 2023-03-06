# Student System Migration Project

## Overview

This project involves migrating an existing student system to a new platform using the C++ programming language. The existing student system contains student data, including student ID, first name, last name, email address, age, an array of the number of days to complete each course, and degree program. The new system will use two classes, Student and Roster, to maintain a current roster of students within a given course.

## Requirements

The program must meet the following requirements:

* Create a Student class that includes variables for student ID, first name, last name, email address, age, an array of the number of days to complete each course, and degree program.
* Create getter and setter functions for each instance variable in the Student class.
* Create a constructor that uses all of the input parameters provided in the table.
* Create a print() function to print specific student data.
* Create a Roster class that includes an array of pointers, called classRosterArray, to hold the data provided in the “studentData Table.”
* Create a function to parse and add each student to classRosterArray.
* Create a function to remove a student from classRosterArray.
* Create a function to print a complete list of student data.
* Create a function to print average days in the course for a given student ID.
* Create a function to print students by degree program.

## Files
The project consists of the following six source code files:

* degree.h: Defines an enumerated data type DegreeProgram for the degree programs containing the data type values SECURITY, NETWORK, and SOFTWARE.
* student.h and student.cpp: Contains the Student class definition and implementation, including getter and setter functions, constructor, and print() function.
* roster.h and roster.cpp: Contains the Roster class definition and implementation, including functions to add and remove students from classRosterArray, print a complete list of student data, print average days in the course for a given student ID, and print students by degree program.
* main.cpp: Contains the main function to run the program.

## Input
The program reads a list of five students from the “studentData Table” and creates student objects. 

## Output
The program directs specific data-related output to the console, including a complete list of student data, average days in the course for a given student ID, and a list of students by degree program.

![Output Screenshot](https://github.com/mwmullins2/Student-System-Migration/blob/b4969e7dc79e74b79f37d312a65993e2ad8020fb/SSM%20Output.JPG)

## Instructions

To run the program, follow these steps:

* Download or clone the project files to your computer.
* Open an IDE (Integrated Development Environment) that supports C++, such as Code::Blocks or Visual Studio.
* Open the project file in the IDE.
* Build and compile the project.
* Run the program.
* View the output in the console.
