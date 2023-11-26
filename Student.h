#pragma once
#include <iostream>
#include <string>
using namespace std;
class Student
{
protected:
	string fullName;
	double averageGrade;
	int telephoneNumber;
	int numberOfGroup;
	string nameOfStudyingBuilding;
	string city;
	string country;
public:
	Student();
	Student(string fullName, double averageGrade, int telephoneNumber, int numberOfGroup, string nameOfStudyingBuilding, string city, string country);

	void setFullName(string fullName);
	void setAverageGrade(double averageGrade);
	void setTelephoneNumber(int telephoneNumber);
	void setNumberOfGroup(int numberOfGroup);
	void setNameOFStudyingBuilding(string nameOfStudyingBuilding);
	void setCity(string city);
	void setCountry(string country);

	string getFullNAme() const;
	double getAverageGrade() const;
	int getTelephoneNumber() const;
	int getNumberOfGroup() const;
	string getNameOfStudyingBuilding() const;
	string getCity() const;
	string getCountry() const;

	void show() const;
	void setAll();

};

