#pragma once
#include <iostream>
#include "degree.h"
using namespace std;

class Student {
public:
	Student (string newStudentID, string newFirstName, string newLastName, string newEmail, int newAge, int newDaysToCompleteCourse[3], Degree newDegree);
	~Student ();
	string GetID();
	void SetID(string newStudentID);
	string GetFirstName();
	void SetFirstName(string newFirstName);
	string GetLastName();
	void SetLastName(string newLastName);
	string GetEmail();
	void SetEmail(string newEmail);
	int GetAge();
	void SetAge(int newAge);
	int* GetDaysToCompleteCourse();
	void SetDaysToCompleteCourse(int days[]);
	virtual Degree GetDegreeProgram() = 0;
	void SetDegreeProgram(Degree deg);
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

