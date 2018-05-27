#pragma once
#include "student.h"

class SoftwareStudent : public Student {
public:
	using Student::Student;
	Degree GetDegreeProgram();

private:
	Degree degree = SOFTWARE;
};
