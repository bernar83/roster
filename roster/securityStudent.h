#pragma once
#include "student.h"

class SecurityStudent : public Student {
public:
	Degree GetDegreeProgram();

private:
	Degree degree = SECURITY;
};
