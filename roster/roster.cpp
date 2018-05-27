// roster.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "roster.h"
#include <string>

using namespace std;

int main() {
    return 0;
}

Roster::~Roster() {

}

void Roster::Add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree program) {
	int days[3] = { daysInCourse1, daysInCourse2, daysInCourse3 };

	for (int i = 0; i < 5; i++) {
		if (ClassRosterArray[i] == nullptr) {
			if (program == SECURITY) {
				ClassRosterArray[i] = new SecurityStudent(studentID, firstName, lastName, emailAddress, age, days, program);
			}
			else if (program == NETWORKING) {
				ClassRosterArray[i] = new NetworkStudent(studentID, firstName, lastName, emailAddress, age, days, program);
			}
			else {
				ClassRosterArray[i] = new SoftwareStudent(studentID, firstName, lastName, emailAddress, age, days, program);
			}

			break;
		}
	}
}

void Roster::Remove(string studentID) {
	int i = 0;
	bool found = false;

	while (ClassRosterArray[i] != nullptr) {

		if (ClassRosterArray[i]->GetID() == studentID) {
			
			ClassRosterArray[i] = nullptr;
			
			found = true;

			break;
		}

		i++;
	}

	if (found == false) {
		cout << "Error: Student not found." << endl;
	}
}

void Roster::PrintAll() {
	int i = 0;

	while (ClassRosterArray[i] != nullptr) {

		ClassRosterArray[i]->Print();
		
		i++;
	}
}

void Roster::PrintDaysInCourse(string studentID) {
	int i = 0;

	while (ClassRosterArray[i] != nullptr) {
		if (ClassRosterArray[i]->GetID() == studentID) {
			int* daysToAvg = ClassRosterArray[i]->GetDaysToCompleteCourse();
			float sumOfDays = 0.0;

			for (int i = 0; i < 3; i++) {
				sumOfDays += daysToAvg[i];
			}

			cout << (sumOfDays / 3);
		}

		i++;
	}
}

void Roster::PrintInvalidEmails() {
	int i = 0;

	while (ClassRosterArray[i] != nullptr) {
		Student* student = ClassRosterArray[i];
		string email = student->GetEmail();
		bool foundError = false;
		
		if (email.find('@') == string::npos) {
			foundError = true;
		}

		if (email.find('.') == string::npos) {
			foundError = true;
		}

		if (email.find(' ') != string::npos) {
			foundError = true;
		}

		if (foundError == true) {
			cout << email << endl;
		}

		i++;
	}
}

void Roster::PrintByDegreeProgram(Degree degree) {
	int i = 0;

	while (ClassRosterArray[i] != nullptr) {
		Student* student = ClassRosterArray[i];

		if (student->GetDegreeProgram() == degree) {
			student->Print();
		}
		
		i++;
	}
}
