#pragma once
#include "student.h"

class NetworkStudent : public Student {
public:
	Degree GetDegreeProgram();

private:
	Degree degree = NETWORKING;
};
