#pragma once
#include "student.h"
#include "securityStudent.h"
#include "networkStudent.h"
#include "softwareStudent.h"

class Roster
{
public:
	~Roster();
	void Add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree program);
	void Remove(string studentID);
	void PrintAll();
	void PrintDaysInCourse(string studentID);
	void PrintInvalidEmails();
	void PrintByDegreeProgram(Degree degree);
	Student * ClassRosterArray[6] = { nullptr, nullptr, nullptr, nullptr, nullptr };

};
