#include "student.h"

Student::Student()
{
	this->nextElement = NULL;
}

Student::~Student()
{

}

void Student::setName(string aName)
{
	this->name = aName;
}

void Student::setAverage(double aAverage)
{
	this->average = aAverage;
}

void Student::setGroupe(string aGroupe)
{
	this->groupe = aGroupe;
}

void Student::setCourse(int aCourseYear)
{
	this->courseYear = aCourseYear;
}

void Student::setNextElement(Student* pNextElement)
{
	this->nextElement = pNextElement;
}

string Student::getName()
{
	return this->name;
}

double Student::getAverage()
{
	return this->average;
}

string Student::getGroupe()
{
	return this->groupe;
}

int Student::getCourse()
{
	return this->courseYear;
}

Student* Student::getNextElement()
{
	return this->nextElement;
}
