#pragma once
#include "student.h"

class NetworkStudent : public Student {
public:
	using Student::Student;
	Degree GetDegreeProgram();

private:
	Degree degree = NETWORKING;
};
