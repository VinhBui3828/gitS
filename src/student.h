#ifndef STUDENT_H
#define STUDENT_H

#include <string>


using namespace std;

class Student
{
private:
	string name;
	double average;
	int age;
	string groupe;
	int courseYear;
	Student* nextElement;
public:
	Student();
	~Student();

	void setName(string aName);
	void setAverage(double aAverage);
	void setGroupe(string aGroupe);
	void setCourse(int aCourseYear);
	void setNextElement(Student* pNextStudent);

	string getName();
	double getAverage();
	string getGroupe();
	int getCourse();
	Student* getNextElement();
};

#endif