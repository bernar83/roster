#pragma once
#include <iostream>
#include "degree.h"
using namespace std;

class Student {
public:
	Student (string newStudentID, string newFirstName, string newLastName, string newEmail, int newAge, int newDaysToCompleteCourse[3], Degree newDegree);
	~Student ();
	string GetID();
	void SetID();
	string GetFirstName();
	void SetFirstName();
	string GetLastName();
	void SetLastName();
	string GetEmail();
	void SetEmail();
	int GetAge();
	void SetAge();
	int* GetDaysToCompleteCourse();
	void SetDaysToCompleteCourse(int* days);
	virtual Degree GetDegreeProgram();
	void SetDegreeProgram();
	virtual void Print();

private:
	string studentID;
	string firstName;
	string lastName;
	string email;
	int age;
	int daysToCompleteCourse[3];
	Degree degree;
};

