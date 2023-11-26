#include "Student.h"

Student::Student()
{
    fullName = "Undefine";
    averageGrade = 0;
    telephoneNumber = 0;
    numberOfGroup = 0;
    nameOfStudyingBuilding = "Undefine";
    city = "Undefine";
    country = "Undefne";
}

Student::Student(string fullName, double averageGrade, int telephoneNumber, int numberOfGroup, string nameOfStudyingBuilding, string city, string country)
{
    this->fullName = fullName;
    this->averageGrade = averageGrade;
    this->telephoneNumber = telephoneNumber;
    this->numberOfGroup = numberOfGroup;
    this->nameOfStudyingBuilding = nameOfStudyingBuilding;
    this->city = city;
    this->country = country;
}

void Student::setFullName(string fullName)
{
    this->fullName = fullName;
}

void Student::setAverageGrade(double averageGrade)
{
    this->averageGrade = averageGrade;
}

void Student::setTelephoneNumber(int telephoneNumber)
{
    this->telephoneNumber = telephoneNumber;
}

void Student::setNumberOfGroup(int numberOfGroup)
{
    this->numberOfGroup = numberOfGroup;
}

void Student::setNameOFStudyingBuilding(string nameOfStudyingBuilding)
{
    this->nameOfStudyingBuilding = nameOfStudyingBuilding;
}

void Student::setCity(string city)
{
    this->city = city;
}

void Student::setCountry(string country)
{
    this->country = country;
}

string Student::getFullNAme() const
{
    return fullName;
}

double Student::getAverageGrade() const
{
    return averageGrade;
}

int Student::getTelephoneNumber() const
{
    return telephoneNumber;
}

int Student::getNumberOfGroup() const
{
    return numberOfGroup;
}

string Student::getNameOfStudyingBuilding() const
{
    return nameOfStudyingBuilding;
}

string Student::getCity() const
{
    return city;
}

string Student::getCountry() const
{
    return country;
}

void Student::show() const
{
    cout << "Full Name: " << fullName << endl;
    cout << "Average Grade: " << averageGrade << endl;
    cout << "Telephone Number: " << telephoneNumber << endl;
    cout << "Number of group: " << numberOfGroup << endl;
    cout << "Name of studying building: " << nameOfStudyingBuilding << endl;
    cout << "City: " << city << endl;
    cout << "Country: " << endl;
}

void Student::setAll()
{
    cout << "¬ведите ‘»ќ студента: ";
    getline(cin, fullName);
    cout << "¬ведите среднюю оценку: ";
    cin >> averageGrade;
    cout << "¬ведите контактный телефон: ";
    cin >> telephoneNumber;
    cout << "¬ведите номер группы: ";
    cin >> numberOfGroup;
    cout << "¬ведите город учебного заведени€: ";
    cin.ignore();
    getline(cin, nameOfStudyingBuilding);
    cout << "¬ведите город учебного заведени€: ";
    getline(cin, city);
    cout << "¬ведите страну учебного заведени€: ";
    getline(cin, country);
}
