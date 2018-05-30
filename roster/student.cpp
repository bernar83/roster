#include "student.h"
#include <string>

string Student::GetID() {
	return studentID;
}

void Student::SetID(string newStudentID) {
	studentID = newStudentID;
}

string Student::GetFirstName() {
	return firstName;
}

void Student::SetFirstName(string newFirstName) {
	firstName = newFirstName;
}

string Student::GetLastName() {
	return lastName;
}

void Student::SetLastName(string newLastName) {
	lastName = newLastName;
}

string Student::GetEmail() {
	return email;
}

void Student::SetEmail(string newEmail) {
	email = newEmail;
}

int Student::GetAge() {
	return age;
}

void Student::SetAge(int newAge) {
	age = newAge;
}

int* Student::GetDaysToCompleteCourse() {
	return daysToCompleteCourse;
}

void Student::SetDaysToCompleteCourse(int days[]) {
	for (int i = 0; i < 3; i++) {
		daysToCompleteCourse[i] = days[i];
	}
}

void Student::SetDegreeProgram(Degree deg) {
	degree = deg;
}

void Student::Print() {
	int* days = GetDaysToCompleteCourse();

	string degree;

	if (this->degree == SECURITY) {
		degree = "Security";
	}
	else if (this->degree == NETWORKING) {
		degree = "Networking";
	}
	else {
		degree = "Software";
	}

	cout << GetID() << '\t';
	cout << "First Name: " << GetFirstName() << '\t';
	cout << "Last Name: " << GetLastName() << '\t';
	cout << "Age: " << GetAge() << '\t';
	cout << "daysInCourse: " << '{' << days[0] << ", " << days[1] << ", " << days[2] << "}\t";
	cout << "Degree Program: " << degree << endl;
}

Student::Student(string newStudentID, string newFirstName, string newLastName, string newEmail, int newAge, int newDaysToCompleteCourse[3], Degree newDegree) {
	SetID(newStudentID);
	SetFirstName(newFirstName);
	SetLastName(newLastName);
	SetEmail(newEmail);
	SetAge(newAge);
	SetDaysToCompleteCourse(newDaysToCompleteCourse);
	SetDegreeProgram(newDegree);
}

Student::~Student() {

}