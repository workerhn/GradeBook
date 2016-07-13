// GradeBook.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class GradeBook
{
public:
	//function that sets the course name
	void setCourseName(string name)
	{
		courseName = name;
	}

	//function that gets the course name
	string getCourseName()
	{
		return courseName;
	}

	//function that displays a welcome message to the GadeBook user
	void displayMessage()
	{
		cout << "Welcome to the grade book for \n" << courseName << "!" << endl;
	}

private:
	string courseName; // course name for this GaradeBook
};

int main()
{
	string nameOfCourse; // string of characters to store the course name
	GradeBook myGradeBook;

	// display initial value of courseName
	cout << "Initial course name is: " << myGradeBook.getCourseName() << endl;

	//prompt for and input course name
	cout << "please enter the course name:" << endl;
	getline(cin, nameOfCourse); // read a course name with blanks
	myGradeBook.setCourseName(nameOfCourse);
	cout << endl;

	//call myGradeBook's displayMessage function
	// and pass nameOfCourse as an argument
	myGradeBook.displayMessage();
    return 0;
}

